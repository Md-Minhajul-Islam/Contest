#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve()
{
	ll n, m; cin >> n >> m;
	map<ll, ll> a, b;
	for(int i = 0; i < n;i++)
	{
		ll x; cin >> x;
		a[(x%m)]++;
	}
	for(int i = 0; i < n;i++)
	{
		ll x; cin >> x;
		b[(x%m)]++;
	}
	ll ans = 0;
	for(auto x: a)
	{
		if(x.fi == 0)
		{
			ans += b[0]*x.se;
		}
		else ans += b[(m-x.fi)]*x.se;
	}
	cout << ans << "\n";

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