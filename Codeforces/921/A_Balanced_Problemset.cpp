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
    int x, n; cin >> x >> n;
    int ans = -1;
    for(int i = 1; i*i <= x; i++)
    {
        if(x%i == 0)
        {
            int j = x/i;
            if(j >= n) ans = max(ans, i);
            if(i >= n) ans = max(ans, j);
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