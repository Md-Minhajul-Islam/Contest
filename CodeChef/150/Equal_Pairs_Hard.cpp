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
#define yes cout << "YES\n"
#define no cout << "NO\n"

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


void solve()
{
    ll n; cin >> n;
    ll a[n+5];
    memset(a, 0, sizeof(a));
    ll tot = 0, zero = n, mx_occur = 0;
    vll ans;
    while(n--)
    {
    	ll x, y;
    	cin >> x >> y;
    	ll prev_y = 1ll*a[y]*(a[y]-1)/2;
    	a[y]++; --zero;
    	if(a[mx_occur] > a[y]) 
    	{
    		ll prev_pair = 1ll*a[mx_occur]*(a[mx_occur]-1)/2;
    		ll pres_pair = 1ll*(a[mx_occur]+zero)*(a[mx_occur]+zero-1)/2;
    		ll pres_y = 1ll*a[y]*(a[y]-1)/2;
    		ans.pb(0ll+tot+pres_pair-prev_pair+pres_y-prev_y);
    		tot -= prev_y;
    		tot += pres_y;
    	}
    	else
    	{
    		ll pres_y = 1ll*(a[y]+zero)*(a[y]+zero-1)/2;
	    	ans.pb(0ll+tot+pres_y-prev_y);
	    	tot -= prev_y;
	    	tot += 1ll*a[y]*(a[y]-1)/2;
	    	mx_occur = y;
    	}
    }
    for(auto &x: ans) cout << x << " ";
    	cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}