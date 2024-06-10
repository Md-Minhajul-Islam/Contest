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
	ll x; cin >> x;
	vii v;
	while(x)
	{
		v.pb(x%10);
		x /= 10;
	}
	reverse(v.begin(), v.end());
	int carry = 0;
	for(int k = v.size()-1; k > 0; k--)
	{
		bool f = 0;
		for(int i = 5; i <= 9; i++)
		{
			for(int j = 5; j <= 9; j++)
			{
				if((i+j+carry)%10 == v[k])
				{
					carry = 1; f = 1;
					break;
				}
			}
			if(f == 1) break;
		}
		if(f == 0)
		{
			cout <<"NO\n";
			return;
		}
	}
	if(v[0] == 1)
	{
		cout <<"YES\n";
	}
	else cout << "NO\n";
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