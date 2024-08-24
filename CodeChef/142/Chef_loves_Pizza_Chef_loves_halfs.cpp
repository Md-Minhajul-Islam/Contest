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

ll v[100006];

void precal()
{
	ll j = 2, ans = 0;
	for(ll i = 2; i <= 100000; i+=2)
	{
		if(j == i)
		{
			ans = 0;
			j = i*2;
		}
		else if(ans == 0) ans = 4;
		else ans += 4;
		v[i] = ans;
	}
}
void solve()
{
	ll n; cin >> n;
	cout << v[n] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precal();
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}