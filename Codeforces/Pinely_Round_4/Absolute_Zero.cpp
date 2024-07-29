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
	ll n; cin >> n;
	ll a[n]; for(int i = 0; i < n; i++) cin >> a[i];
	int k = 40; vll v;
	while(k--)
	{
		sort(a, a+n);
		ll x = (a[0]+a[n-1])/2;
		v.pb(x);
		for(int i = 0; i < n; i++) a[i] = abs(a[i]-x);
	}
	for(int i = 0; i < n; i++)
		if(a[i] != 0)
		{
			cout << -1 << "\n"; return;
		}
	cout << 40 << "\n";
	for(auto x: v) cout << x << " ";
		cout << "\n";
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