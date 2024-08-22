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

ll fun(vll &v, ll x)
{
	ll l = 0, r = v.size()-1;
	while(l <= r && v[l] != x) l++;
	while(r >= l && v[r] != x) r--;
	if(l > r) return 0;
	for(int i = l; i <= r; i++)
	{
		if(x == 1 && v[i] == 3) return 0;
		if(x == 2 && v[i] == 1) return 0;
		if(x == 3 && v[i] == 2) return 0;
	}
	ll p = l, q = r;
	while(p >= 0)
	{
		if(x == 1 && v[p] == 3) break;
		if(x == 2 && v[p] == 1) break;
		if(x == 3 && v[p] == 2) break;
		p--;
	}
	while(q < v.size())
	{
		if(x == 1 && v[q] == 3) break;
		if(x == 2 && v[q] == 1) break;
		if(x == 3 && v[q] == 2) break;
		q++;
	}
	return (1ll*(l-p)*(q-r));
	
}

void solve()
{
    ll n; cin >> n;
    vll a(n); for(auto &x: a) cin >> x;
    ll ans = 1ll*n*(n+1)/2;
    ans -= fun(a, 1);
    ans -= fun(a, 2);
    ans -= fun(a, 3);
    cout << ans << "\n";
    return;
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