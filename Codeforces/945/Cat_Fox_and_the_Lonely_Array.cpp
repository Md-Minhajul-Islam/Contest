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
    int a[n+1][30];
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        for(int j = 0; j < 25; j++)
        {
            a[i][j] = (x & (1<<j));
        }
    }
    int mx = 1;
    for(int i = 0; i < 25; i++)
    {
        int prev = 0;
        for(int j = 1; j <= n; j++)
        {
            if(a[j][i] != 0)
            {
                mx = max(mx, j-prev);
                prev = j;
            }
        }
        if(prev != 0) mx = max(mx, n+1-prev);
    }
    cout << mx << '\n';
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