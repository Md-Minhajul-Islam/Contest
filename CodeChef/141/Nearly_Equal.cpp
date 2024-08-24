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
	string a, b; cin >> a >> b;
	int mn = INT_MAX;
	for(int i = 0; i <= n-m; i++)
	{
		int cnt = 0;
		for(int k = i, j = 0; j < m; j++, k++)
		{
			if(a[k] != b[j]) cnt++;
		}
		mn = min(cnt, mn);
	}
	cout << mn <<"\n";
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