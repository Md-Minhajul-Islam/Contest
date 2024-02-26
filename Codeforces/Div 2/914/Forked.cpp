// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair
 

void solve()
{
    ll a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    vector<pll> dir = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {-b, a}, {b, -a}, {-b, -a}};    
    set<pll> p, q;
    for(auto &x: dir)
    {
        p.insert({xk+x.fi, yk+x.se});
        q.insert({xq+x.fi, yq+x.se});
    }
    int ans = 0;
    for(auto qq: q)
    {
        if(p.count(qq) > 0) ans++;
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