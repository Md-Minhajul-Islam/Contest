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
    int n; string s;
    cin >> n >> s;
    int cnt[26] = { 0 };
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(cnt[s[i] - 'a'] == 0)
        {
            ans += (n * 1ll - i * 1ll);
            cnt[s[i] - 'a'] = 1;
        }
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