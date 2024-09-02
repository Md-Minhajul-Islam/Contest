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
	int a[n][m];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++) cin >> a[i][j];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			int mx = 0;
			if(i-1 >= 0) mx = max(mx, a[i-1][j]);
			if(i+1 < n) mx = max(mx, a[i+1][j]);
			if(j-1 >= 0) mx = max(mx, a[i][j-1]);
			if(j+1 < m) mx = max(mx, a[i][j+1]);
			if(a[i][j] > mx) a[i][j] = mx;
		}
	}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++) cout << a[i][j] << " \n"[j+1 == m];
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