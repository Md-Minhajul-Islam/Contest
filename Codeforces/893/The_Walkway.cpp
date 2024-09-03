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
    ll n, m, d; cin >> n >> m >> d;
    vll a(m+1);
    a[0] = 1;
    for(int i = 1; i <= m; i++) cin >> a[i];
    map<ll, ll> mp;
    
	mp[1] = 1;
	for(int i = 1; i <= m; i++)
	{
		if(a[i] != 1) mp[a[i]] = mp[a[i-1]]+(a[i]-a[i-1]-1)/d+1;
	}
    mp[n+1] = mp[a[m]]+(n-a[m])/d;
	map<ll, ll> ans;
	for(int i = 1; i <= m; i++)
	{
        ll cnt = 0;
        if(i == m) cnt = mp[a[i-1]]+(n-a[i-1])/d;
        else cnt = mp[a[i-1]]+mp[n+1]-mp[a[i+1]]+1+(a[i+1]-a[i-1]-1)/d;
        ans[cnt]++;
	}
    for(auto &x: ans) 
    {
        cout << x.fi << " " << x.se << "\n";
        break;
    }
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