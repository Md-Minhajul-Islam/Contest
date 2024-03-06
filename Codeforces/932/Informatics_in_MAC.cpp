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
    int a[n+1];
    vii f(n+1, 0);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[a[i]] = 1;
    }
    int mex;
    for(int i = 0; i <= n; i++)
    {
        if(f[i] == 0)
        {
            mex = i;
            break;
        }
    }
    if(mex == 0)
    {
        cout << n << '\n';
        for(int i = 1; i <= n; i++) cout << i << ' ' << i << '\n';
        return;
    }
    vector<pii> v;
    int i = 1;
    while(i <= n)
    {
        int l = i;
        vii trc(mex+1, 0);
        int cnt = 0;
        while(cnt < mex && i <= n)
        {
            if(a[i] < mex && trc[a[i]] == 0)
            {
                trc[a[i]] = 1;
                cnt++;
            }
            i++;
        }
        if(cnt == mex)
        {
            int r = i-1;
            v.pb({l, r});
        }
        else i++;
    }
    if(v.size() < 2)
    {
        cout << -1 << '\n';
        return;
    }
    cout << v.size() << '\n';
    v[v.size()-1].se = n;
    for(auto &x: v) cout << x.fi << ' ' << x.se << '\n';
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