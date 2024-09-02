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
	int n; cin >> n;
	ll a[n], cnt[n+1], sum = 0;
	memset(cnt, 0, sizeof(cnt));
	for(int i = 0; i < n; i++) cin >> a[i];
	ll var = 0;
	for(int i = 0; i < n; i++)
	{
		sum += a[i];
		cnt[a[i]]++;
		if(cnt[a[i]] >= 2 && a[i] > var) var = a[i];
		a[i] = var;
	}
	ll sum2 = 0;
	var = 0; memset(cnt, 0, sizeof(cnt));
	for(int i = 0; i < n; i++)
	{
		sum += a[i];
		cnt[a[i]]++;
		if(cnt[a[i]] >= 2 && a[i] > var) var = a[i];
		a[i] = var;
		sum2 += a[i];
	}
	var = 0;
	for(int i = n-1; i >= 0; i--)
	{
		sum += sum2;
		sum2 -= a[i];
	}
	cout << sum << "\n";
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