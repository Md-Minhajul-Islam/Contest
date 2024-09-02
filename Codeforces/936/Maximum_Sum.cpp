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

const ll m = 1e9+7;
 
void solve()
{
    ll n, k; cin >> n >> k;
    ll a[n]; 
    ll sum = 0, mx = 0, mn = 0;
    for(int i = 0; i < n; i++) cin >> a[i], sum += a[i];
    ll pref[n+1];
    pref[0] = 0;
    for(int i = 0; i < n; i++)
        pref[i+1] = pref[i]+a[i];
    for(int i = 1; i <= n; i++)
    {
        mx = max(mx, pref[i]-mn);
        mn = min(mn, pref[i]);
    }
    mx %= m;
    ll ans = (sum%m+m)%m;
    for(ll i = 1, j = 1; i <= k; i++)
    {
        ll x = (mx*j)%m;
        ans = (ans+x)%m;
        j = (j*2)%m;
    }
    cout << ans <<"\n";
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