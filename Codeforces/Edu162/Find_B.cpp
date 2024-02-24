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
    int n, q; cin >> n >> q;
    ll a[n+1],  b[n+1];
    a[0] = 0, b[0] = 0ll;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
        if(b[i] == 1) a[i] = a[i - 1] + 1;
        else a[i] = a[i - 1];
        b[i] += b[i-1];
        
        
    }
    while(q--)
    {
        ll l, r; cin >> l >> r;
        if(r-l+1 == 1) cout << "NO\n";
        else
        {
            ll len = (r-l+1);
            ll one = a[r]-a[l-1];
            ll sum = b[r]-b[l-1];
            if((len-one)+one*2 <= sum) cout << "YES\n";
            else cout << "NO\n";
        }
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