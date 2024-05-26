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
    int a[n]; 
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int ind = -1;
    bool vis[n];
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i < n; i++)
    {
        if(a[i]%a[0] == 0) vis[i] = 1;
    }
    for(int i = 0; i < n; i++) if(vis[i] == 0){ind = i; break;}
    for(int i = 0; i < n; i++)
    {
        if(vis[i] == 0)
        {
            if(a[i]%a[ind] == 0) vis[i] = 1;
        }
    }
    bool  f = 1;
    for(int i = 0; i < n; i++)
        if(vis[i] == 0) f = 0;
    if(f) cout << "Yes\n";
    else cout << "No\n";
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