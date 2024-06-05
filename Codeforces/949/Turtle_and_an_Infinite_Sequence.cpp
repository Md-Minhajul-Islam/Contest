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
    ll n, m; cin >> n >> m;
    ll l = max(0ll, n-m), r = n+m;
    ll ans = 0ll;
    for(ll i = 0; i < 32; i++)
    {
        ll left_block = l/(1ll<<i), right_block = r/(1ll<<i);
        if(left_block != right_block || right_block%2)
            ans |= (1ll << i);
    }
    cout << ans << "\n";
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