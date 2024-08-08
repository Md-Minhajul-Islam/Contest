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


int fun(int n)
{
	int cnt = 0;
	int i = 1;
	while(i*2 <= n)
	{
		i *= 2;
		cnt++;
	}
	return cnt;
}

void solve()
{
	int n = 16;
	int a[n], b[n];
	for(int i = 0; i < n; i++) cin >> a[i], b[i] = a[i];
	sort(a, a+n);
	map<int, int> m;
	for(int i = 0; i < n; i++)
	{
		//cout << a[i] << " " << fun(i+1) << "\n";
		m[a[i]] = fun(i+1);
	}
	for(int i = 0; i < n; i++)
	{
		cout << m[b[i]] << " \n"[i+1==n];
	}
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