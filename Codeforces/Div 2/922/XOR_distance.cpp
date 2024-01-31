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
    ll a, b, r; cin >> a >> b >> r;
    if(a<b) swap(a, b);
    bool f = 0;
    ll x = 0ll;
    for(int i = 60; i >= 0; i--)
    {
        bool abit = (a&(1ll<<i));
        bool bbit = (b&(1ll<<i));
        if((abit == bbit)) continue;

        if((x|(1ll<<i)) > r)
        {
            if(abit) f = 1;
            continue;
        }
        if(f)
        {
            if(bbit == 0) x |= (1ll<<i); 
        }
        else
        {
            f = 1;
            if(abit == 0) x |= (1ll<<i);
        }
    }
    ll ans = min(abs((a^x)-(b^x)), abs((a^0ll)-(b^0ll)));
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