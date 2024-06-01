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
    ll n, m; cin >> n >> m;
    vector<pair<ll, ll>> inp(n+m+1);
    for(int i = 0; i < n+m+1; i++) cin >> inp[i].fi;
    for(int i = 0; i < n+m+1; i++) cin >> inp[i].se;
    bool flag[n+m+1];
    ll sum = 0, prog = 0, test = 0, last_prog = -1, last_tester = -1;
    for(int i = 0; i < n+m+1; i++)
    {
        if(prog == n+1) sum += inp[i].se, test++, last_tester = max(last_tester, i*1ll), flag[i] = 1;
        else if(test == m+1) sum += inp[i].fi, prog++, last_prog = max(last_prog, i*1ll), flag[i] = 0;
        else if(inp[i].fi > inp[i].se) sum += inp[i].fi, prog++, last_prog = max(last_prog, i*1ll), flag[i] = 0;
        else sum += inp[i].se, test++, last_tester = max(last_tester, i*1ll), flag[i] = 1;
    }
    vll ans(n+m+1, sum);
    if(prog == n+1)
    {
        for(int i = 0; i < n+m+1; i++)
        {
            if(flag[i] == 0) ans[i] -= inp[i].fi;
            else ans[i] = ans[i]-inp[i].se-inp[last_prog].fi+inp[last_prog].se;
        }
    }
    else
    {
        for(int i = 0; i < n+m+1; i++)
        {
            if(flag[i] == 1) ans[i] -= inp[i].se;
            else ans[i] = ans[i] - inp[i].fi-inp[last_tester].se+inp[last_tester].fi;
        }
    }
    for(int i = 0; i < n+m+1; i++)
    {
        cout << ans[i] << " \n"[i == n+m];
    }
    

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