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

const int N = 3e5+5;
const int INF = 1e8;
int d[N], l[N], r[N];
int n;
string s;
void dfs(int u, int cnt)
{
    if(u == n+1) return;
    d[u] = min(d[u], cnt);
    if(s[u] == 'L')
    {
        if(l[u]) dfs(l[u], cnt);
        if(r[u]) dfs(r[u], cnt+1);
    }
    else if(s[u] == 'R')
    {
        if(l[u]) dfs(l[u], cnt+1);
        if(r[u]) dfs(r[u], cnt);
    }
    else
    {
        if(l[u]) dfs(l[u], cnt+1);
        if(r[u]) dfs(r[u], cnt+1);
    }
}
void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++) d[i] = INF;
    cin >> s;
    s = '0'+s;
    for(int i = 1; i <= n; i++)
        cin >> l[i] >> r[i];
    dfs(1, 0);
    int ans = INF;
    for(int i = 1; i <= n; i++)
        if(!l[i] && !r[i] && d[i] != INF)
            ans = min(ans, d[i]);
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