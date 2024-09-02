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
	ll a[3], k; cin >> a[0] >> a[1] >> a[2] >> k;
	sort(a, a+3);
	ll b[3], c[3], f = 0, ans = 0;
	for(ll x = 1; x <= 2005; x++)
	{
		if(k%x != 0) continue;
		for(ll y = 1; y <= 2005; y++)
		{
			if(k%(x*y) == 0)
			{
				b[0] = x, b[1] = y, b[2] = k/(x*y);
				sort(b, b+3);
				if(b[0] <= a[0] && b[1] <= a[1] && b[2] <= a[2])
				{				
						ans = max(ans, (a[0]-b[0]+1)*(a[1]-b[1]+1)*(a[2]-b[2]+1));
						f = 1;	
				}
			}
		}
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