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
    int n, k; cin >> n >> k;
    int a[n+1][k+1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            char c; cin >> c;
            a[i][j] = c-48;
        }
    }
    vii v;
    v.pb(-1);
    for(int i = 1; i <= n; i++)
    {
        int cnt = 0, active = -1;
        for(int j = 1; j <= k; j++)
        {
            if(a[i][j] == 1) cnt++, active = j;
        }
        if(cnt == 1) v.pb(active);
    }
    sort(v.begin(), v.end());
    // for(auto x: v) cout << x << ' ';
    // cout << '\n';
    for(int i = 1; i <= k; i++)
    {
        if(v[i] != i) 
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}