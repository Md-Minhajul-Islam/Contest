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
	ll n, x; cin >> n >> x;
	ll cnt = 0;
	for(ll a = 1; a <= x; a++)
	{
		for(ll b = 1; (a+b) <= x; b++)
		{
			ll c1 = x-a-b, c2 = (n-a*b)/(a+b);
			ll c = min(c1, c2);
			if(c <= 0) break;
			//cout << a <<  " " << b << " " << c << "\n";
			cnt += c;
		}
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