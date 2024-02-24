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
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 1000, r = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i]) 
        {
            l = min(l, i);
            r = max(r, i);
        }
    }
    // cout << l << ' ' << r << '\n';
    int ans = 0;
    for(int i = l; i <= r; i++)
    {
        if(a[i] == 0) ans++;
    }
    cout << ans <<'\n';
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