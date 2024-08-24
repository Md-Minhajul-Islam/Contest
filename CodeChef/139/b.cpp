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
	int ans[n+1];
	int half = n/2;
	for(int i = 1; i <= half; i++)
	{
		ans[i] = i+half;
	}
	for(int i = half+1; i <= n; i++) 
		ans[i] = i-half;
	if(n%2 == 1) ans[n] = ans[1], ans[1] = n;
	for(int i = 1; i <= n; i++) cout << i <<" \n"[i==n];
	for(int i = 1; i <= n; i++) cout << ans[i] << " \n"[i==n];
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