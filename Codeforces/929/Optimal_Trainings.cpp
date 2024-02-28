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

ll fun(ll u, ll m, ll l, ll a[])
{
    return ((u+u- a[m]+a[l-1]+1)*(a[m]-a[l-1]))/2;
}
void solve()
{
    int n; cin >> n; ll a[n+1];
    a[0] = 0ll;
    for(int i = 1; i <= n; i++)
    {
        ll x; cin >> x;
        a[i] = a[i-1]+x;
    }
    int q; cin >> q;
    while(q--)
    {
        ll l1, u; cin >> l1 >> u;
        // r = n-1;
        int aa = 4;
        int l = l1, r = n;
        while(r-l >= 3)
        {
            int m1 = l+(r-l)/3;
            int m2 = r-(r-l)/3;
            ll f1 = fun(u, m1, l1, a);
            ll f2 = fun(u, m2, l1, a);
            // cout << m1 << '-' << m2 << ' ';
            // cout << f1 <<'-' << f2 << '\n';
            if(f1 < f2) l = m1;
            else r = m2;
        }
        ll op1, op2, op3;
        op1 = op2 = op3 = -1e18;
        op1 = fun(u, r, l1, a);
        op2 = fun(u, l, l1, a);
        if(l+1 < n) op3 = fun(u, l+1, l1, a);
        if(op1 > op2 && op1 > op3) cout << r << ' ';
        else if(op3 > op2) cout << l+1 << ' ';
        else cout << l << ' ';
    }
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