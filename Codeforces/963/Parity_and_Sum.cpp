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
	ll mx_odd = -1;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i]%2) mx_odd = max(mx_odd, a[i]);
	}
	if(mx_odd == -1)
	{
		cout << 0 << "\n";
		return;
	}
	sort(a, a+n);
	int ind = -1;
	ll cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2) continue;
		if(a[i] > mx_odd) 
		{
			ind = i; break;
		}
		else cnt += 1, mx_odd += a[i];
	}
	if(ind == -1)
	{
		cout << cnt << "\n"; return;
	}
	for(int i = n-1; i >= ind; i--)
	{
		if(a[i]%2) continue;
		if(a[i] > mx_odd)
		{
			cnt += 2, mx_odd += 2*a[i];
		}
		else cnt += 1, mx_odd += a[i];
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