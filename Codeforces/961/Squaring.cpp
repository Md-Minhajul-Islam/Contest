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
	ll n; cin >> n; ll a[n];

	for(int i = 0; i < n; i++) cin >> a[i];
	vll pref(n, 0);
	for(int i = 1; i < n; i++)
	{
		if(a[i-1] > 1 && a[i] == 1)
		{
			cout << -1 << "\n"; return;
		}

		ll prev = a[i-1], curr = a[i], steps = 0;
		while(prev != 1 && prev < curr) prev *= prev, steps--;
		while(curr < prev) curr *= curr, steps++;

		pref[i] = max(0ll, pref[i-1]+steps);
	}
	ll tot = 0;
	for(auto x: pref) tot += x;
	cout << tot <<"\n";
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