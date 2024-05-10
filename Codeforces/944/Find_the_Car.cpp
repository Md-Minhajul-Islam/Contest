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
    ll n, k, q; cin >> n >> k >> q;
    ll a[k + 1], b[k + 1];
    a[0] = b[0] = 0ll;
    for(int i = 1; i <= k; i++) cin >> a[i];
    for(int i = 1; i <= k; i++) cin >> b[i];
    while(q--)
    {
        ll d; cin >> d;
        if(d == 0)
        {
            cout << 0 << ' ';
            continue;
        }
        int x = lower_bound(a, a + k + 1, d) - a;
        ll t = (d - a[x - 1]) * (b[x] - b[x - 1]) / (a[x] - a[x - 1]);
        cout << t + b[x - 1] << ' ';
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