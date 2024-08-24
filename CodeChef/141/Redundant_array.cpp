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
	ll n; cin >> n;
	ll cnt[n+1];
	memset(cnt, 0, sizeof(cnt));
	for(int i = 0; i < n;i++)
	{
		int x; cin >> x;
		cnt[x]++;
	}
	ll mn = n;
	for(int i = 1; i <= n; i++)
	{
		mn = min(mn, (n-cnt[i])*i);
	}
	cout << mn << "\n";
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
