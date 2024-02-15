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
    int n, x, y; cin >> n >> x >> y;
    int a[n];
    map<pii, int> m;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll cnt = 0;
    for(int i = 0; i < n; i++)
    {
        int xmod = (x-(a[i]%x))%x;
        int ymod = a[i]%y;
        cnt += m[{xmod, ymod}];
        m[{a[i]%x, a[i]%y}]++;
    }
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