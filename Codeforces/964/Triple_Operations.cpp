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

ll dp[200009];
ll suff[200009];

void precal()
{
	for(int i = 1; i <= 200005; i++) 
	{
		dp[i] = dp[i/3]+1;
		suff[i] = suff[i-1]+dp[i];
	}
}

void solve()
{
	ll l, r; cin >> l >> r;
	ll a = l, b = l+1;
	ll cnt = 0;
	while(a)
	{
		a = a/3;
		b *= 3;
		cnt++;
	}
	//cout << b << "\n";
	while(b)
	{
		b = b/3;
		cnt++;
	}
	//cout << cnt << "\n";
	if(r-l >= 2)
	{
		cnt += suff[r]-suff[l+1];
	}
	// cnt += dp[b];

	// for(int i = l+2; i <= r; i++) cout << dp[i] << " ";
	// 	cout << "\n";
	// for(int i = l+2; i <= r; i++)
	// {
	// 	cnt += dp[i];
	// }
	cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precal();
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}