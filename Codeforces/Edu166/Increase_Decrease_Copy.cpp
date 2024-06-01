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
    ll n; cin >> n;
    ll a[n], b[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i <= n; i++) cin >> b[i];
    pii p[n];
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += abs(a[i]-b[i]);
        p[i].fi = min(a[i], b[i]);
        p[i].se = max(a[i], b[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(b[n] >= p[i].fi && b[n] <= p[i].se)
        {
            cout << ans+1 <<"\n";
            return;
        }
    }
    ll mn = 1e18;
    for(int i = 0; i < n; i++)
    {
        mn = min(mn, min(abs(b[n]-p[i].fi), abs(b[n]-p[i].se)));
    }
    cout << ans+mn+1 << "\n";

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