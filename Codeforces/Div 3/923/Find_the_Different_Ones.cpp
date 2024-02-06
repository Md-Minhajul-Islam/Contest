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
    int a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int i = 1, j = 1;
    int trace[n+1];
    memset(trace, -1, sizeof(trace));
    while(j < n+1)
    {
        if(a[i] != a[j])
        {
            trace[i] = j;
            i++;
        }
        else j++;
    }
    int q; cin >> q;
    while(q--)
    {
        int l, r; cin >> l >> r;
        if(trace[l] != -1 && trace[l] <= r) cout << l << " " << trace[l] << '\n';
        else cout << -1 <<  ' ' << -1 << '\n';
    }
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