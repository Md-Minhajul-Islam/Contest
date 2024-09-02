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
	int n; string s; 
	cin >> n >> s;
	int a[n], f = 0;
	for(int i = 0; i < n; i++)
	{
		a[i] = s[i]-'0';
		if(s[i]-'0' == 0 && (i-2 >= 0 || i+2 < n))
		{
			f = 1;
		}
	}
	if(n <= 2)
	{
		cout << a[0]*10+a[1] << "\n";
		return;
	} 
	if(f)
	{
		cout << 0 << "\n";
		return;
	}
	vll v;
	int ind, mn = 1e9;
	for(int i = 0; i < n-1; i++)
	{
		if(a[i]*10+a[i+1] < mn)
		{
			mn = a[i]*10+a[i+1];
			ind = i;
		}
	}
	int i = 0;
	while(i < n)
	{
		if(i == ind)
		{
			v.pb(mn);
			i += 2;
		}
		else
		{
			v.pb(a[i]);
			i++;
		}
	}
	ll ans = v[0];
	for(int i = 1; i < v.size(); i++)
	{
		ans = min(ans*v[i], ans+v[i]);
	}
	cout << ans <<"\n";

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