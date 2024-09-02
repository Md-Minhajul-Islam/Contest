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
	int n, m; cin >> n >> m;
	string a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	
	int up = 1e9, dn = -1, l = 1e9, r = -1;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j] == '#')
			{
				up = min(i, up);
				dn = max(i, dn);
				l = min(l, j);
				r = max(r, j);
			}
		}
	}
	up++, dn++, l++, r++;
	cout << (up+dn)/2 << " " << (l+r)/2 << "\n";
	
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