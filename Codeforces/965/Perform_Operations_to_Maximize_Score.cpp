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


bool cmp(pii a, pii b)
{
	return a.fi < b.fi;
}

void solve()
{
    ll n, k; cin >> n >> k;
    pii a[n];
    for(int i = 0; i < n; i++) cin >> a[i].fi;
    for(int i = 0; i < n; i++) cin >> a[i].se;
    sort(a, a+n, cmp);
	ll mx = 0ll+a[n-1].fi+a[n/2-1].fi;
	int ind = -1;
	for(int i = n-1; i >= 0; i--)
	{
		if(a[i].se)
		{
			ind = i; break;
		}
	}
	if(ind != -1)
	{
		if(ind < n/2) mx = max(mx, 0ll+a[ind].fi+k+a[n/2].fi);
		else mx = max(mx, 0ll+a[ind].fi+k+a[n/2-1].fi);
	}
	//cout << mx << "\n";
	ll lo = 0, hi = 2e9+7;
	while(lo != hi)
	{
		ll mid = (1ll+lo+hi)/2;
		ll cnt = 0;
		vll v;
		for(int i = 0; i < n-1; i++)
		{
			if(a[i].fi >= mid) cnt++;
			else if(a[i].se) v.pb(mid-a[i].fi);
		}
		reverse(v.begin(), v.end());
		ll kk = k;
		for(auto x: v) if(x <= kk) kk -= x, cnt++;
		if(cnt >= (n+1)/2) lo = mid;
		else hi = mid-1;
	}
	//cout << lo << "\n";
	mx = max(mx, 0ll+lo+a[n-1].fi);
	cout << mx << "\n";
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