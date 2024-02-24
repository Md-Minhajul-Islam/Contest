// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

void solve()
{
    int n; cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        s.insert(x);
    }
    vii v;
    for(auto& x : s) v.pb(x);
    int ans = -1;
    for(int i = 0, j = 0; i < v.size(); i++)
    {
        while(j < v.size() && v[j] - v[i] < n) j++;
        --j;
        ans = max(ans, j - i + 1);
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}