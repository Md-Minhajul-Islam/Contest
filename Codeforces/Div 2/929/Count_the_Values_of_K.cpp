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

ll power(ll a, ll x, ll l)
{
    ll ans = 1;
    for(int i = 0; i < x; i++) 
    {
        ans *= a;
        if(ans > l) return 0;
    }
    return ans;
}

void solve()
{
    ll a, b, l; cin >> a >> b >> l;
    set<ll> s;
    ll tt, tt2;
    for(ll x = 0; x <= 20; x++)
    {
        tt = power(a, x, l); 
        if(tt == 0) break;
        for(ll y = 0; y <= 20; y++)
        {
            tt2 = power(b, y, l);
            if(tt2 == 0) break;
            if(l%(tt*tt2) == 0)
            {
                s.insert((l/(tt*tt2)));
            }
        }
    }
    cout << s.size() << '\n';
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