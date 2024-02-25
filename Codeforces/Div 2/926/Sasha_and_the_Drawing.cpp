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
    ll d = 4*n-2;
    ll ans = 0;
    if(k <= (d-2))
    {
        ans += k/2;
        if(k%2) ans += 1;
    }
    else if(k == (d-1))
    {
        ans += (k-1)/2;
        if((k-1)%2) ans += 1;
        ans += 1;
    }
    else
    {
        ans += 2*n;
    }
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