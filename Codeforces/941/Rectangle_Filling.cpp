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
    int n, m; cin >> n >> m;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    bool u, d, l, r;
    u = d = l = r = 0;
    for(int i = 0; i < m; i++) if(s[0][i] == 'W') u = 1;
    for(int i = 0; i < m; i++) if(s[n-1][i] == 'W') d = 1;
    for(int i = 0; i < n; i++) if(s[i][0] == 'W') l = 1;
    for(int i = 0; i < n; i++) if(s[i][m-1] == 'W') r = 1;

    if(u && d && l && r)
    {
        cout <<  "YES\n";
        return;
    }

    u = d = l = r = 0;
    for(int i = 0; i < m; i++) if(s[0][i] == 'B') u = 1;
    for(int i = 0; i < m; i++) if(s[n - 1][i] == 'B') d = 1;
    for(int i = 0; i < n; i++) if(s[i][0] == 'B') l = 1;
    for(int i = 0; i < n; i++) if(s[i][m - 1] == 'B') r = 1;

    if(u && d && l && r)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";

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