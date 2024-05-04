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
    int n, m; cin >> n >> m;
    ll a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    ll tot = 0;
    for(int i = m; i < n; i++)
    {
        tot += min(a[i], b[i]);
    }
    ll tem[m+1];
    tem[m] = tot;
    for(int i = m-1; i >= 0; i--)
    {
        tem[i] = tem[i+1]+b[i];
    }
    ll mn = __LONG_LONG_MAX__;
    for(int i = 0; i < m; i++)
    {
        mn = min(mn, a[i]+tem[i+1]);
    }
    cout << mn << '\n';
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