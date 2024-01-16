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
    int n; cin >> n; ll a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    ll pref = a[0], odd = 0;
    if(a[0]%2) odd++;
    cout << a[0] << ' ';
    for(int i = 1; i < n; i++)
    {
        if(a[i]%2) odd++;
        pref += a[i];
        ll ans = pref - odd/3;
        if(odd%3 == 1) ans -= 1;
        cout << ans <<  ' ';
    }
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