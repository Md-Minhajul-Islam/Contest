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

bool mark[100009];
vll prime;
void precal()
{

	mark[0] = mark[1] = 1;
	for(ll i = 2; i*i <= 100005; i++)
	{
		if(mark[i] == 0)
		{
				for(ll j = i*i; j <= 100005; j += i)
				{
					mark[j] = 1;
				}
		}
	}
	for(int i = 0; i <= 100005; i++) 
		if(mark[i] == 0) prime.pb(i);
}

void solve()
{
	ll n; cin >> n;
	for(int i = 0; i < prime.size(); i++)
	{
		ll a = prime[i]*prime[i];
		if(a > n) break;
		for(int j = 0; j < prime.size(); j++)
		{
			ll b = prime[j]*prime[j];
			if(a+b > n) break;
			ll c = n-a-b;
			if(ceil((double)sqrtl(c)) != floor((double)sqrt(c))) continue;
			int in = sqrtl(c);
			if(mark[in] == 0 && a != b && b != c && a != c)
			{
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
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