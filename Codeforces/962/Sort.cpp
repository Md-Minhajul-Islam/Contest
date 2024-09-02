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
	int n, q; cin >> n >> q;
	string a, b; cin >> a >> b;

	int aa[26][n+1], bb[26][n+1];
	memset(aa, 0, sizeof(aa));
	memset(bb, 0, sizeof(bb));

	for(int i = 0; i < n; i++)
	{
		aa[a[i]-'a'][i+1]++;
		bb[b[i]-'a'][i+1]++;
	}
	for(int i = 0; i < 26; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			aa[i][j] += aa[i][j-1];
			bb[i][j] += bb[i][j-1];
		}
	}
	while(q--)
	{
		int l, r; cin >> l >> r;
		int ans = 0;
		for(int i = 0; i < 26; i++)
		{
			if(bb[i][r]-bb[i][l-1] > aa[i][r]-aa[i][l-1])
			{
				ans += (bb[i][r]-bb[i][l-1])-(aa[i][r]-aa[i][l-1]);
			}
		}
		cout << ans << "\n";
	}
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