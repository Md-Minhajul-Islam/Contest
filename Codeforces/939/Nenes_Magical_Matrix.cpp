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
    int sum = 0;
    for(int i = 2*n-1, k = n; i >= 1; i -= 2, k--) sum += i*k;
    int opr = 2*n;
    cout << sum << ' ' << opr <<'\n';
    for(int i = n; i >= 1; i--)
    {
        cout << 1 << ' ' << i << ' ';
        for(int j = 1; j <= n; j++) cout << j << " \n"[j==n];
        cout << 2 << ' ' << i << ' ';
        for(int j = 1; j <= n; j++) cout << j << " \n"[j == n];
    }
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