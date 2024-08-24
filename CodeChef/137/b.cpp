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
    ll a[n]; 
    for(int i = 0; i < n; i++) cin >> a[i];

    if(n == 1)
    {
        cout << k << "\n";
        return;
    }
    
    ll diff = 0;
    for(int i = 0; i < n-1; i++)
    {
        diff += abs(a[i]-a[i+1]);
    }
    ll mx = diff;
    for(int i = 0; i < n; i++)
    {
        if(i == 0 && i+1 < n)
        {
            ll tem = diff-abs(a[i]-a[i+1]);
            ll tem2 = max(abs(k-a[i + 1]), abs(1 - a[i + 1]));
            mx = max(mx, tem+tem2);
        }
        else if(i == n-1 && n-2 >= 0)
        {
            ll tem = diff - abs(a[i] - a[i-1]);
            ll tem2 = max(abs(k- a[i-1]), abs(1 - a[i-1]));
            mx = max(mx, tem + tem2);
        }
        else 
        {
            ll tem = diff - abs(a[i] - a[i - 1])-abs(a[i]-a[i+1]);
            ll tem2 = max(abs(k - a[i - 1])+abs(k-a[i+1]), abs(1 - a[i - 1])+abs(1-a[i+1]));
            mx = max(mx, tem + tem2);
        }
    }
    cout << mx << "\n";
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