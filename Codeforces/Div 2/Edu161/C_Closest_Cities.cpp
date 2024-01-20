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
    int n; cin >> n;
    ll a[n+2];
    for(int i = 1; i <= n; i++) cin >> a[i];
    ll s1[n+2];
    s1[0] = 0ll, s1[1] = 0ll, s1[2] = 1ll;
    for(int i = 3; i <= n; i++)
    {
        ll left = abs(a[i-1]-a[i-2]), right = abs(a[i]-a[i-1]);
        s1[i] = s1[i-1]+((right < left ) ? 1:right);
    }
    s1[n+1] = 0ll;
    ll s2[n+2];
    s2[n-1] = 1ll, s2[n] = 0ll, s2[n+1] = 0ll;
    for(int i = n-2; i >= 1; i--)
    {
        ll left = abs(a[i]-a[i+1]), right = abs(a[i+1]-a[i+2]);
        s2[i] = s2[i+1] + ((left < right) ? 1:left);
    }
    s2[0] = 0ll;
    int m; cin >> m;
    while(m--)
    {
        int x, y; cin >> x >> y;
        if(x < y)
            cout << min(abs(a[x]-a[y]), s1[y]-s1[x]) << '\n';
        else
            cout << min(abs(a[x]-a[y]), s2[y]-s2[x]) << '\n';
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