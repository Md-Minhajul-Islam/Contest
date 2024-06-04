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
    int n, f, k; cin >> n >> f >> k;
    f--;
    int a[n]; 
    int fav_cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = a[f];
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x) fav_cnt++;
    }
    sort(a, a+n);
    int cnt = 0;
    for(int i = n-1, j = 0; j < k; i--, j++)
    {
        // cout << a[i] << '\n';
        if(a[i] == x) cnt++;
    }
    // cout << x << " " << cnt << " " << fav_cnt << '\n';
    if(cnt == 0) cout << "NO\n";
    else if(cnt == fav_cnt) cout << "YES\n";
    else cout << "MAYBE\n";
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