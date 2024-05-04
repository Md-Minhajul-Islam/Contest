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
    map<pair<int, int>, int> m;
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        int y = i;
        if(y > x) swap(y, x);
        m[{y, x}]++;
    }
    int f = 0;
    for(auto x: m)
    {
        if(x.se == 2) f = 1;
    }
    if(f) cout << 2 << '\n';
    else cout << 3 << '\n';
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