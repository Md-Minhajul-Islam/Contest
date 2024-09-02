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
	
	vii v; v.pb(n);
	n = n-1;
	while(n)
	{
		v.pb(n), v.pb(n);
		n--;
	}
	int cnt = 0, i = 0;
	while(k > 0)
	{
		cnt++;
		k -= v[i];
		i++;
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