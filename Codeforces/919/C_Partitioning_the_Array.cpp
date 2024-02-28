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
    int n; cin >> n; vii a(n);
    for(auto &x: a) cin >> x;
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            int k = n/i, g = 0;
            for(int j = 0; j < k; j++)
            {
                int diff = 0;
                for(int l = j; l < n; l+=k)
                    diff = __gcd(diff, abs(a[j]-a[l]));
                g = __gcd(g, diff);
            }
            ans += (g != 1);
        }
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