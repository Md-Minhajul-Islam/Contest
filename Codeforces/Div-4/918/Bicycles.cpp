// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair

void dijkastra(ll src, vll s, vector<pii> adj[], ll n)
{
    vector<vll> dis(n+5, vll(n+5, 1e17));
    vector<vector<bool>> vis(n+5, vector<bool>(n+5, false));
    priority_queue<array<ll, 3>, vector<array<ll, 3>>, greater<array<ll, 3>>> pq;

    dis[src][src] = 0ll;
    ll srcBike = 1;
    pq.push({dis[src][src], src, srcBike});

    while(!pq.empty())
    {
        ll city = pq.top()[1];
        ll bike = pq.top()[2];
        pq.pop();
        if(city == n)
        {
            cout << dis[city][bike] << '\n';
            return;
        }
        vis[city][bike] = true;
        for(auto it: adj[city])
        {
            ll v = it.fi;
            ll w = it.se;
            ll newbike = bike;
            if(s[v] < s[bike]) newbike = v;
            if(vis[v][newbike]) continue;
            if(dis[v][newbike] > dis[city][bike]+w*s[bike])
            {
                dis[v][newbike] = dis[city][bike]+w*s[bike];
                pq.push({dis[v][newbike], v, newbike});
            }
        }
    }
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pii> adj[n+2];
    while(m--)
    {
        ll u, v, w; cin >> u >> v >> w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }
    vll s(n+5);
    for(int i = 1; i <= n; i++) cin >> s[i];
    dijkastra(1, s, adj, n);
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