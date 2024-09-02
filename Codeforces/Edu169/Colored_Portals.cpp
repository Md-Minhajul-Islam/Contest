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
    int n, q; cin >> n >> q;
    string s[n+1];
    for(int i = 1; i <= n; i++) cin >> s[i];

    map<string, int> m;
    m["BG"] = 0, m["BR"] = 1, m["BY"] = 2, m["GR"] = 3, m["GY"] = 4, m["RY"] = 5;

    int a[12][n+2];
    for(int i = 0; i < 12; i++) a[i][0] = -1, a[i][n+1] = 1e9;

    for(int i = 1; i <= n; i++)
    {
    	for(int j = 0; j < 6; j++) a[j][i] = a[j][i-1];
    	a[m[s[i]]][i] = i;
    }
    for(int i = n; i >= 1; i--)
    {
    	for(int j = 6; j <= 11; j++) a[j][i] = a[j][i+1];
    	a[m[s[i]]+6][i] = i;
    }

    while(q--)
    {
    	int l, r; cin >> l >> r;
    	if(l > r) swap(l, r);

    	if(s[l][0]==s[r][0] || s[l][0]==s[r][1] || s[l][1]==s[r][0] || s[l][1]==s[r][1])
    	{
    		cout << r-l << "\n"; continue;
    	}
    	int ans = 1e9;
    	int mx = -1;
    	for(int i = 0; i <= 5; i++)
    	{
    		if(i==m[s[l]] || i == m[s[r]]) continue;
    		mx = max(mx, a[i][r]);
    	}
    	if(mx != -1) ans = abs(l-mx)+abs(mx-r);

    	int mn = 1e9;
    	for(int i = 6; i <= 11; i++)
    	{
    		if(i == m[s[l]]+6 || i == m[s[r]]+6) continue;
    		mn = min(mn, a[i][r]);
    	}	
    	if(mn != 1e9) ans = min(ans, abs(l-mn)+abs(mn-r));
    	
    	if(ans == 1e9) cout << -1 << "\n";
    	else cout << ans << "\n";
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