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
    int n; cin >> n; char a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) cin >> a[i][j];
    bool f = 1;
    int mn = 1000, mx = 0;
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
            if(a[i][j] == '1') cnt++;
        if(cnt == 0) continue;
        else mn = min(mn, cnt), mx = max(mx, cnt);
    }
    if(mn == mx) cout << "SQUARE\n";
    else cout << "TRIANGLE\n";
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