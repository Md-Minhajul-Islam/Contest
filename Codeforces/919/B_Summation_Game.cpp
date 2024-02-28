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
    int n, k, x; cin >> n >> k >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n, greater<int>());
    for(int i = 1; i < n; i++)
    {
        a[i] += a[i-1];
    }
    int mx = a[n-1]-(2*a[x-1]);
    for(int i = 0; i < k; i++)
    {
        int sum = a[n-1]-a[i]; 
        int j = min(n-1, i+x);
        int bob = a[j]-a[i];
        mx = max(mx, sum-(2*bob));
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