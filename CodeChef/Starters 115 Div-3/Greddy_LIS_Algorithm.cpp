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
    int n, x; cin >> n >> x;
    if((n - x <= 1) && x != 0)
    {
        cout << -1 << '\n'; return;
    }
    if(x == 0)
    {
        for(int i = 1; i <= n; i++) cout << i << ' ';
        cout << '\n';
        return;
    }
    x = n - x;
    vii v;
    for(int i = 1; i < x - 1; i++) v.pb(i);
    v.pb(n);
    for(int i = x - 1; i < n; i++) v.pb(i);
    for(auto x : v) cout << x << ' ';
    cout << '\n';
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