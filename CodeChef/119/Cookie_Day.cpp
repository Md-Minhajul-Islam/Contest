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
    int a[n]; 
    int f = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i]; 
        if(a[i] >= k) f = 1;
    }
    if(f == 0)
    {
        cout << -1 << '\n'; return;
    }
    int mn = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < k) continue;
        int x = a[i]/k;
        mn = min(mn, a[i]-(k*x));
    }
    cout << mn << '\n';
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