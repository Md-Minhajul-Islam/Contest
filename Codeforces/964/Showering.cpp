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
	ll n, s, m; cin >> n >> s >> m;
	ll a[n+2], b[n+2]; a[0] = b[0] = 0, a[n+1] = m, a[n+1] = m;

	for(int i = 1; i <= n; i++) cin >> a[i] >> b[i];
	for(int i = 1; i <= n+1; i++)
	{
		if(a[i]-b[i-1] >= s)
		{
			yes return;
		}
	}
	no
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