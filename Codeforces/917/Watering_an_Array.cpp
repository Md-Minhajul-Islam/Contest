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
    int n, k, d; cin >> n >> k >> d;
    vii a(n), b(k);
    for(auto &i: a) cin >> i;
    for(auto &i: b) cin >> i;
    int ans = 0;
    for(int i = 0; i < min(2*n, d); i++)
    {
        int currEqual = 0;
        for(int j = 0; j < n; j++)if(a[j] == j+1) currEqual++;
        ans = max(ans, currEqual+(d-i-1)/2);
        for(int j = 0; j < b[i%k]; j++) a[j]++;
    }
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