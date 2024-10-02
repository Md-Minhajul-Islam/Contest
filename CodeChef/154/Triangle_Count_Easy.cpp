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
    vll v(n);
    for(auto &x: v) cin >> x;
    if(n == 1)
    {
    	cout << 0 <<"\n";
    	return;
    }
    ll ans = 0;
    sort(v.begin(), v.end());
    ll right = 0, left = 1e12;
    vector<pii> a;
    for(int i = 1; i < n; i++)
    {
    	ll r = v[i]+v[i-1]-1;
    	ll l = v[i]-v[i-1]+1;
    	a.pb({l, r});
    }
    sort(a.begin(), a.end(), [&](auto x, auto y){
    	if(x.fi == y.fi) return x.se < y.se;
    	else return x.fi < y.fi;
    });
    ll prev_left = 0;
    for(int i = 0; i < a.size(); i++)
    {
    	if(prev_left >= a[i].se) continue;
    	if(prev_left >= a[i].fi)
    	{
    		ans += a[i].se-prev_left;
    	}
    	else
    	{
    		ans += a[i].se-a[i].fi+1;
    	}
    	prev_left = a[i].se;
    }
    if(left < right) ans = right-left+1;
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