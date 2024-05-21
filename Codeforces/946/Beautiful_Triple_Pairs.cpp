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
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    map<pii, int> ab, ac, bc;
    map<tuple<int, int, int>,int> abc, acb, bca;
    ll ans = 0;
    for(int i = 0; i < n-2; i++)
    {
        int a, b, c;
        a = ar[i], b = ar[i+1], c = ar[i+2];
        ab[{a, b}]++, ac[{a, c}]++, bc[{b, c}]++;
        abc[{a, b, c}]++, acb[{a, c, b}]++, bca[{b, c, a}]++;
        ans += ab[{a, b}]+ac[{a, c}]+bc[{b, c}];
        ans -= abc[{a, b, c}]+acb[{a, c, b}]+bca[{b, c, a}];
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