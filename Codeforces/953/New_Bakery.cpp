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
	ll n, a, b;
	cin >> n >> a >> b;
	if(b <= a)
	{
		cout << n*a <<"\n";
		return;
	}
	ll k = b+1-a;
	ll ans = 0;
	if(k < n)
	{
		ans = k*(2ll*b-k+1)/2ll;
		ans += (n-k)*a;
	}
	else 
	{
		ans = n*(2ll*b-n+1)/2ll;
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