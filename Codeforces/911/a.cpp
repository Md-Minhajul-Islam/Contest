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
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n;
        string a; cin >> a;
        int ans = 0, cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == '#') 
            {
                ans += min(2, cnt); cnt = 0;
            }
            else cnt++;
        }
        ans += min(2, cnt);
        int adj = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == '#') adj = 0;
            else adj++;
            if(adj == 3) break;
        }
        // if(ans > 2 && a[0] == '#' && a[n-1] == '#') ans = 2;
        if(adj == 3) cout << 2 << '\n';
        else cout << ans << '\n';
    }
    return 0;
}