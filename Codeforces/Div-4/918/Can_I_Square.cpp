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
    ll tot = 0;
    for(int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        tot += x;
    }
    double a; ll b;
    a = sqrt(tot*1.0); b = sqrt(tot);
    if((a-b) < 1e-9) cout << "YES\n";
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