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
	if(n*m == 1)
	{
		cout << -1 << "\n"; return;
	}
	if(m==1)
	{
		for(int i = 0; i < n-1; i++) swap(a[i][0], a[i+1][0]);
	}
	else
	{
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m-1; j++) swap(a[i][j], a[i][j+1]);
	}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++) cout << a[i][j] << " \n"[j+1==m];
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