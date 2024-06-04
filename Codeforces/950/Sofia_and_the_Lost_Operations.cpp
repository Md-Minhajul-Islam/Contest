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
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int m; cin >> m;
    int d[m];
    for(int i = 0; i < m; i++) cin >> d[i];

    map<int, int> mm, tem;
    for(int i = 0; i < n; i++)
    {
        tem[b[i]]++;
        if(a[i] == b[i]) continue;
        else mm[b[i]]++;
    }
    if(tem[d[m-1]] == 0) 
    {
        cout << "NO\n";
        return;
    }
    map<int, int> dd;
    for(int i = 0; i < m; i++)
    {
        dd[d[i]]++;
    }
    for(auto x: mm)
    {
        if(x.se > dd[x.fi]) 
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