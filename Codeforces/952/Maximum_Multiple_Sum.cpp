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
	int mx = 0, ans = 0;
	for(int i = 2; i <= n; i++)
	{
		int sum = 0, k = i, j = 2;
		while(k <= n)
		{
			sum += k;
			k  = i*j;
			j++;
		}
		if(sum > mx) 
		{
			mx = sum;
			ans = i;
		}
		//cout << sum << " " << i <<"\n";
	}
	cout << ans << "\n";
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