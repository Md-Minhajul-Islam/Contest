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
	ll orr = 0;
	ll a[n]; for(int i = 0; i < n; i++)
	{
		cin >> a[i], orr |= a[i];
	}
	ll x = 1;
	for(int i = 0; i <= 60; i++)
	{
		if(orr&(1<<i)) x *= 2;
		else break;
	} 
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= x) cnt++;
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