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
	ll a[n-1]; for(int i = 0; i < n-1; i++) cin >> a[i];
	ll b[n];
	b[0] = a[0];
	for(int i = 1; i < n-1; i++)
	{
		b[i] = (a[i-1]|a[i]);
	}
	b[n-1] = a[n-2];
	for(int i = 0; i < n-1;i++)
	{
		if(a[i] != (b[i]&b[i+1]))
		{
			cout << -1 <<"\n"; return;
		}
	}
	for(int i = 0; i < n; i++) cout << b[i] << " \n"[i+1==n];
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