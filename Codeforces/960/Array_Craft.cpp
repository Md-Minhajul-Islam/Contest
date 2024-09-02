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
	int n, x, y; cin >> n >> x >> y;
	int a[n+1];
	for(int i = 1; i <= n; i++) a[i] = 1;
	for(int i = x+1; i <= n; i+=2) a[i] = -1;
	for(int i = y-1; i >= 1; i -= 2) a[i] = -1;
	for(int i = 1; i <= n; i++) cout << a[i] << " \n"[i==n];
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