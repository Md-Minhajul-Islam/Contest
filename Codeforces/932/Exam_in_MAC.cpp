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
    ll n, c; cin >> n >> c;
    vll a(n); 
    for(auto &i: a) cin >> i;
    ll tot = (c+1)*(c+2)/2;
    ll odd = 0, even = 0;
    for(auto &i: a)
    {
        tot -= (i+2)/2;
        tot -= (c-i+1);

        odd += (i%2);
        even += (1-(i%2));

        if(i%2) tot += odd;
        else tot += even;
    }
    cout << tot << '\n';
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