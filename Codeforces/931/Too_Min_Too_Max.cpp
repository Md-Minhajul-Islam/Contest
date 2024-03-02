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
    ll a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll p = a[0], q = a[1], r = a[n-2], s = a[n-1];
    ll x = abs(p-r)+abs(r-q)+abs(q-s)+abs(s-p);
    cout << x << '\n';
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