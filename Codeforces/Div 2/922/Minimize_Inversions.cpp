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

bool cmp(pii x, pii y)
{
    return x.fi < y.fi;
}
void solve()
{
    int n; cin >> n;
    pii a[n];
    for(int i = 0; i < n; i++) cin >> a[i].fi;
    for(int i = 0; i < n; i++) cin >> a[i].se;
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++) cout << a[i].fi << ' ';
    cout << '\n';
    for(int i = 0; i < n; i++) cout << a[i].se << ' ';
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