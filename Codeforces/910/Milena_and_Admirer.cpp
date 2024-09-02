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

int binarySearch(int l, int r, int n)
{
    int ans = -1;
    int lim = r;
    while(l <= r)
    {
        int m = l+(r-l)/2;
        if(m <= (n-m) && (n-m) <= r) ans = max(ans, m), l = m+1;
        else r = m-1;
    }
    return ans;
}

void solve()
{
    int n; cin >> n; int a[n];
    for(int i = 0;  i < n; i++) cin >> a[i];
    int cnt = 0;
    if(n == 1) 
    {
        cout << 0 << '\n';
        return;
    }
    for(int i = n-2; i >= 0; i--)
    {
        if(a[i] > a[i+1])
        {
            cnt++;
            a[i] = binarySearch(1, a[i+1], a[i]);
        }
    }
    while(a[0] > a[1]) a[0] = binarySearch(1, a[1], a[0]), cnt++;
    for(auto x: a) cout << x << ' ';
    cout << '\n';
    cout << cnt << '\n';
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