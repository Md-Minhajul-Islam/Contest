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
	ll n, c; cin >> n >> c;
	ll a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	ll sum = 0;
	for(int i = 1; i < n; i++) sum += a[0]*a[i];
	if(sum <= c)
	{
		cout << 1 << '\n';
		return;
	} 
	sort(a, a+n);
	sum = 0; ll prev = 0;
	for(int i = 0; i < n; i++) sum += a[i];
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		prev += a[i];
		sum -= a[i];
		if(sum*prev <= c) cnt = i+1;
		else break;
	}

	cout << n-cnt << "\n";
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