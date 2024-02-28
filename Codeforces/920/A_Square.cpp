// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair

ll dis(ll a, ll b, ll c, ll d)
{
    return sqrtl((a-c)*(a-c)+(b-d)*(b-d));
} 
void solve()
{
    pii a, b, c, d;

    cin >> a.fi >> a.se;
    cin >> b.fi >> b.se;
    cin >> c.fi >> c.se;
    cin >> d.fi >> d.se;
    ll ans;
    if(a.fi == b.fi)
        ans = dis(a.fi, a.se, b.fi, b.se);
    else if(a.fi == c.fi)
        ans = dis(a.fi, a.se, c.fi, c.se);
    else 
        ans = dis(a.fi, a.se, d.fi, d.se);
    cout << ans*ans << '\n';
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