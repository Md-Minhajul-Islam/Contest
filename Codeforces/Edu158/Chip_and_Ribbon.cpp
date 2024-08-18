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
    int n; cin >> n;
    vll a;
    ll x; cin >> x; a.pb(x);
    for(int i = 1; i < n; i++)
    {
    	ll x; cin >> x;
    	if(x != a[a.size()-1]) a.pb(x);
    }
	
	vii v;
	for(int i = 1; i < a.size()-1; i++)
	{
		if(a[i-1] > a[i] && a[i+1] > a[i]) v.pb(i);
	}
	ll mx = 0, mx_sum = 0, mn_sum = 0;
	for(int i = 0, j = 0; i < a.size(); i++)
	{
		mx = max(mx, a[i]);
		if(j < v.size() && i == v[j])
		{
			//cout << i << "\n";
			mx_sum += 0ll+mx;
			mn_sum += 0ll+a[i];
			mx = 0;
			j++;
		}
	}
	mx_sum += mx;
	//cout << mx_sum << " " << mn_sum << "\n";
	ll ans = 0ll+mx_sum-mn_sum-1;

	cout << ans << "\n";
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