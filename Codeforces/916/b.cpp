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
    if(k == 0)
    {
        for(int i = n; i > 0; i--) cout << i << ' ';
    }
    else
    {
        cout << 1 << ' ';
        for(int i = n-k+1; i <= n; i++) cout << i << ' ';
        for(int i = n-k; i > 1; i--) cout << i << ' ';
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