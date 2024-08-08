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
	int n; cin >> n;
	ll a[n+1];
	for(int i = 1, j = 1; i <= n; i+=2, j++) a[i] = j;
	for(int i = 2, j = n; i <= n; i+=2, j--) a[i] = j;
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