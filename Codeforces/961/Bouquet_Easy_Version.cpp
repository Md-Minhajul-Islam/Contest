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
	ll n, m; cin >> n >> m;
	ll a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	ll i = 0, j = 0, sum = 0, mx = 0, prev = 0, cnt = 0;
	while(j < n)
	{
		if(a[j] != prev) cnt++;

		if(a[j]-prev > 1) sum = a[j], i = j, cnt = 1;
		else sum += a[j];

		if(cnt > 2)
		{
			while(a[i] != prev) sum -= a[i], i++;
			cnt = 2;
		}
		
		while(sum > m && i <= j) sum -= a[i], i++;
			
		mx = max(mx, sum);
		prev = a[j];
		j++;
	}
	cout << mx << "\n";
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