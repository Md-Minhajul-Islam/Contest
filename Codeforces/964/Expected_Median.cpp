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
#define mod 1000000007

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

ll fact[200009];

void precal()
{
	fact[0] = 1;
	for(ll i = 1; i < 200009; i++)
	{
		fact[i] = fact[i-1]*i%mod;
	}
}

ll mod_inverse(ll n, ll p)
{
	ll ans = 1;
	while(p > 0)
	{
		if(p&1) ans = ans*n%mod;
		p /= 2;
		n = n*n%mod;
	}
	return ans;
}

ll nCr(ll n, ll r)
{
	if(n < r) return 0;
	return fact[n]*mod_inverse(fact[n-r]*fact[r]%mod, mod-2)%mod;
}

void solve()
{
    ll n, k; cin >> n >> k;
    ll one = 0;
    for(int i = 0; i < n; i++)
    {
    	ll x; cin >> x;
    	one += x;
    }
    ll zero = n-one;
    ll ans = 0;
    ll req_one = k/2+1;

    for(int i = req_one; i <= min(one, k); i++)
    {
    	ans += nCr(one, i)*nCr(zero, k-i)%mod;
    	ans %= mod;
    }
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

    precal();

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}