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
	ll n; cin >> n; ll a[n+1];
	for(int i = 1;  i <= n; i++) cin >> a[i];
	ll pref[n+2], suff[n+2];
	pref[0] = suff[n+1] = 0;
	//memset(pref, 0, sizeof(pref)); memset(suff, 0, sizeof(suff));
	for(int i = 1; i <= n; i++)
	{
		pref[i] = a[i]+pref[i-1];
	}

	for(int i = n; i >= 1; i--) suff[i] = suff[i+1]+a[i];
	ll cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == 0)
		{
			if(pref[i]==suff[i]) cnt += 2;
			else if(abs(pref[i]-suff[i]) == 1) cnt++;
		}
	}
	cout << cnt << "\n";
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