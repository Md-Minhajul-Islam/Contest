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
	ll n, k; cin >> n >> k;
	ll a[k]; 
	//cout << n << " " << k << "\n";
	for(int i = 0; i < k; i++) cin >> a[i];
	sort(a, a+k);
	//for(int i = 0; i < k ; i++) cout << a[i] << "\n";
	ll ans = 0;
	for(int i = 0; i < k-1; i++) ans += 2*a[i]-1;
	cout << ans << "\n";
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