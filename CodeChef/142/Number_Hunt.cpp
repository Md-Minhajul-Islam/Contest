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

bool prime(ll n)
{
	for(ll i = 2; i*i <= n; i++)
	{
		if(n%i == 0) return 0;
	}
	return 1;
}


void solve()
{
	ll x; cin >> x;
	ll prime1 = -1, prime2 = -1;
	if(x == 1)
	{
		cout << 6 << "\n";
		return;
	}
	for(ll i = x; ;i++)
	{
		if(prime(i))
		{
			if(prime1 == -1) prime1 = i;
			else if(prime2 == -1) prime2 = i;
			else break;
		}
	}
	cout << prime1*prime2 << "\n";
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