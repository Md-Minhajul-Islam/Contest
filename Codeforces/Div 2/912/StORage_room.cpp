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
    int mat[n][n];
    int a[n];
    for(int i = 0; i < n; i++)
    {
        int x = 1073741823;
        for(int j = 0, f = 1; j < n; j++)
        {
            cin >> mat[i][j];
            if(i == j) continue;
            x &= mat[i][j];
        }
        a[i] = x;
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i != j)
            {
                if(mat[i][j] != (a[i]|a[j]))
                {
                    cout << "NO\n";
                    return;
                }
            }
    cout << "YES\n";
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
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