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
    int a[n][m], b[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> a[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> b[i][j];
    
    int row[n*m+1], col[n*m+1];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)  row[a[i][j]] = i, col[a[i][j]] = j;
    
    for(int i = 0; i < n; i++)
    {
        int r = row[b[i][0]];
        for(int j = 1; j < m; j++)
            if(row[b[i][j]] != r)
            {
                cout << "NO\n";
                return;
            }
    }
        
    for(int i = 0; i < m; i++)
    {
        int c = col[b[0][i]];
        for(int j = 0; j < n; j++)
            if(col[b[j][i]] != c)
            {
                cout << "NO\n";
                return;
            }
    }

    cout << "YES\n";
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