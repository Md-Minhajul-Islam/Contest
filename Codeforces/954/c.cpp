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
	int n, m; cin >> n >> m;
	string a, b;
	cin >> a;
	int ar[m];
	set<int> s;
	for(int i = 0; i < m; i++) cin >> ar[i], s.insert(ar[i]);
	cin >> b;
	sort(b.begin(), b.end());
	int i = 0;
	for(auto x: s)
	{
		a[x-1] = b[i];
		i++;
	}
	cout << a << "\n";
	
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