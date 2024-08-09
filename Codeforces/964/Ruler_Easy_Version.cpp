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
	ll l = 1, r = 1000;
	while(l != r)
	{
		ll m = (l+r)/2;
		cout << "? " << 1 << " " << m << "\n";
		fflush(stdout);

		ll n; cin >> n;

		if(n == m)
			l = m+1;
		else r = m;
	}
	cout << "! " << l << "\n";
	fflush(stdout);
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}