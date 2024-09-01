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

const ll mod = 1e9+7;

ll modinv(ll a, ll b, ll m)
{
	ll res = 1;
	while(b > 0)
	{
		if(b&1)
		{
			 res = (1ll*res*a)%m;
		}
		a = (a*1ll*a)%m;
		b >>= 1;
	}
	return res;
}

void solve()
{
    ll n; cin >> n;
    ll p = 0ll, q = 0ll;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll suff[n+1]; suff[n] = 0;
    for(int i = n-1; i >= 0; i--)
    {
    	suff[i] = (suff[i+1]+a[i])%mod;
    }
    for(int i = 0; i < n; i++)
    {
    	p += (a[i]*suff[i+1]) %mod;
    	p %= mod;
    }
    for(ll i = n-1; i >= 1; i--)
    {
    	q += i%mod;
    	q %= mod;
    }
    ll ans = (1ll*p*modinv(q, mod-2, mod))%mod;
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