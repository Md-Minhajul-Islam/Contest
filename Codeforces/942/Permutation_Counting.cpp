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
    ll n, k; cin >> n >> k;
    ll a[n]; ll mx = -1;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll p[n]; p[0] = a[0]; int ind = 0;
    for(int i = 1; i < n; i++) p[i] = p[i-1]+a[i];
    for(int i = 0; i < n; i++)
    {
        if(a[i]*(i+1)-p[i] <= k) ind = i;
        else break;
    }
    ll x = a[ind]+((k-(a[ind]*(ind+1)-p[ind]))/(ind+1));
    k -= (a[ind] * (ind + 1) - p[ind]) + ((k-(a[ind] * (ind + 1) - p[ind]))/(ind + 1))*(ind+1);
    ll ans = x*n-(n-1)+(n-ind+k-1);
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