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
    ll n, f, a, b; cin >> n >> f  >> a >> b;
    ll v[n+1];
    v[0] = 0ll;
    for(int i = 1; i <= n; i++) cin >> v[i];
    bool flag = 1;
    for(int i = 1; i <= n; i++)
    {
        ll z = min(b, (v[i]-v[i-1])*a);
        if(f > z) f -= z;
        else{
            flag = 0; break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
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