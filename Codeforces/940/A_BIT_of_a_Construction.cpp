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
    ll n, k; cin >> n >> k;
    if(n == 1)
    {
        cout << k << '\n';
        return;
    }
    ll sum = 0;
    vii v;
    for(ll i = 1; sum + i <= k; i *= 2)
    {
        sum += i;
    }
    v.pb(sum);
    v.pb(k - sum);
    for(ll j = 3; j <= n; j++) v.pb(0);
    for(auto x : v) cout << x << ' ';
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
