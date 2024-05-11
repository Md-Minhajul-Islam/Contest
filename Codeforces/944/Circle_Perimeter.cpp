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
    ll r; cin >> r;
    ll cnt = 0;
    for(ll x = 0; x <= r; x++)
    {
        ll y1 = sqrtl(r*r-x*x);
        ll y2 = sqrtl((r+1)*(r+1)-x*x);
        if(x*x+y1*y1 < r*r) y1++;
        if(x*x+y2*y2 >= (r+1)*(r+1)) y2--;
        cnt += y2-y1+1;
    }
    cnt = (cnt-2)*4+4;
    cout << cnt << "\n";
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