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
	vii a(n+1, 0);
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x; a[x]++;
	}
	vii suff(n+1, 0);
	suff[n] = a[n];
	for(int i = n-1; i > 0; i--)
	{
		suff[i] = suff[i+1]+a[i];
	}
	for(int i = 1; i <= n; i++)
	{
		if(suff[i]%2)
		{
			cout <<"YES\n"; return;
		}
	}
	 cout << "NO\n";
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