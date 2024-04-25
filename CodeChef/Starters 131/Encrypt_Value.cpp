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
 
const int mod = 1e9+7;

void solve()
{
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    // for(int i = 0; i < n;i++) cout << a[i] << ' ' ;
    // cout << '\n';
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(ans == 0 || ans == 1 || a[i] == 1)
        {
            ans = (ans + a[i]) % mod;
        }
        else 
        {
            ans = (ans * a[i]) % mod;
        }
        //cout << ans << '\n';
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