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
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if(k >= 3)
    {
        cout <<  0 << '\n';
        return;
    }
    sort(a.begin(), a.end());
    ll mn = a[0];
    for(int i = 0; i < n - 1; i++)
        mn = min(mn, a[i+1]-a[i]);
    if(k == 1)
        cout << mn << '\n';
    else
    {
        for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
        {
            ll x = a[j]-a[i];
            int ind = lower_bound(a.begin(), a.end(), x) - a.begin();
            if(ind > 0) mn = min(mn, x-a[ind-1]);
            if(ind < n) mn = min(mn, a[ind]-x);
        }
        cout << mn << '\n';
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