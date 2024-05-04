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
    ll a, b, c; cin >> a >> b >> c;
    if(((b%3) == 1 && c < 2) || ((b%3) == 2 && c < 1))
    {
        cout << -1 << '\n';
        return;
    }
    ll tot = (b+c+3-1)/3;
    tot += a;
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