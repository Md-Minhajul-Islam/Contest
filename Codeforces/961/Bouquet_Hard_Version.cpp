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

	vll v1(n), v2(n);
	for(int i = 0; i < n; i++) cin >> v1[i];
	for(int i = 0; i < n; i++) cin >> v2[i];
	
	map<ll, ll> a;
	for(int i = 0; i < n; i++) a[v1[i]] = v2[i];

	ll mx = 0;
	for(auto x: a)
	{
		ll type1_petals = min(m/x.fi, x.se);
		ll type2_petals = 0;
		if(a.count(x.fi+1))
		{
			type2_petals = min((m-type1_petals*x.fi)/(x.fi+1), a[x.fi+1]);
			ll type2_rem = a[x.fi+1]-type2_petals;
			ll can_exchange = min(m-type1_petals*x.fi-type2_petals*(x.fi+1), min(type1_petals, type2_rem));
			type1_petals -= can_exchange; type2_petals += can_exchange;
		}
		// cout << type1_petals << " " << type2_petals << "\n";
		mx = max(mx, type1_petals*x.fi+type2_petals*(x.fi+1));
	}
	cout << mx << "\n";
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