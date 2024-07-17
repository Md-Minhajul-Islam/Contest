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
	int m = n;
	int a[n+1];
	int k = 0;
	while(n)
	{
		int x = n/2;
		k++;
		for(int i = n; i > x; i--)
		{
			a[i] = k;
			//cout << a[i] << "\n";
			//cout << i << " " << k << "\n";
		}
		n = x;
		//cout << n << "\n";
	}
	cout << k <<"\n";
	for(int i = 1; i <= m; i++) cout << a[i] << " \n"[i==n];
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