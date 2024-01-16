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
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; ll a[n+1];
        a[0] = 0ll;
        for(int i = 1; i <= n; i++)
        {
            ll x; cin >> x;
            a[i] = a[i-1]+x;
        }
        // for(int i = 0; i <= n; i++) cout << a[i] << ' ';
        vii div;
        for(int i = 1; i*i <= n; i++)
        {
            if(n%i == 0)
            {
                div.pb(i);
                if(i != n/i && n/i != n) div.pb(n/i);
            }
        }
        ll ans = -1;
        for(int i: div)
        {
            ll mx = -1, mn = 1e16;
            for(int j = i; j <= n; j += i)
            {
                ll x = a[j] - a[j - i];
                mx = max(mx, x);
                mn = min(mn, x);
            }
            // cout << mx << "->" << mn << '\n';
            ans = max(ans, mx-mn);
        }
        cout << ans << '\n';
    }
    
    return 0;
}