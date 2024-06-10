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
	ll a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	ll op1, op2;
	if(a[n-2]-a[0] != 0)
	{
		cout <<"YES\n";
		for(int i = 0; i < n-1; i++) cout << 'R';
		cout << 'B' <<"\n";
	}
	else if(a[n-1]-a[0] != 0)
	{
		cout <<"YES\n";
		for(int i = 0; i < n; i++)
		{
			if(i == n-2) cout << 'B';
			else cout << 'R';
		}
		cout <<"\n";
	}
	else cout <<"NO\n";
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