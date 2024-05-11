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
    ll a[n];
    map<int, vii> m;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        int k = a[i];
        if((k&1)) k--;
        if((k&2)) k -= 2; 
        m[k].pb(i);
    }
    int ans[n];
    for(auto x: m)
    {
        vii v; 
        for(int i = 0; i < x.se.size(); i++) v.pb(a[x.se[i]]);
        sort(v.begin(), v.end());
        for(int i = 0; i < x.se.size(); i++) ans[x.se[i]] = v[i];
    }
    for(int i = 0; i < n; i++) cout << ans[i] << ' ';
    cout << '\n';
    
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