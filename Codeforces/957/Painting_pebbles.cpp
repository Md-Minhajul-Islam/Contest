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
	int n, k; cin >> n >> k;
	int mn = 10000000;
	int a[n]; for(int i = 0; i < n; i++) cin >> a[i], mn = min(mn, a[i]);
	vii b[n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < mn; j++) b[i].pb(1);
	}
	for(int i = 1; i <= k; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(b[j].size() < a[j]) b[j].pb(i);
		}
	}
	for(int i = 0; i < n; i++) 
		if(b[i].size() < a[i])
		{
			no return;
		}
	yes
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < b[i].size(); j++) cout << b[i][j] << " \n"[j+1==b[i].size()];
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t; cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}