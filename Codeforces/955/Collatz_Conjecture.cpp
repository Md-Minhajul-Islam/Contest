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
	ll x, y, k; cin >> x >> y >> k;
	
	while(k)
	{
		ll inc = max(1ll, min(y-(x%y), k));
		x += inc, k -= inc;
		while(x%y == 0)
		{
			x /= y;
		} 
		if(x == 1) x = 1+k%(y-1), k = 0;
	} 
	cout << x << "\n";
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