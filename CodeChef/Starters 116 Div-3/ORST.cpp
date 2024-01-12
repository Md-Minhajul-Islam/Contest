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
    int n, m; cin >> n >> m; int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    int mx = 0;
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        mx = max(mx, x);
    }
    sort(a+(n-mx), a+n);
    // cout << mx <<' ' << (n-mx) << '\n';
    for(int i = 0; i <n; i++) cout << a[i] << ' ';
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