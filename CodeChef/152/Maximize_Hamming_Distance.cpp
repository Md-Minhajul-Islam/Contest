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
    int n, m; cin >> n >> m;
    vector<string> s(m);
    for(int i = 0;i < m; i++) cin >> s[i];
    ll cnt[n];
    for(int i = 0; i < n; i++)
    {
    	ll zero = 0, one = 0, ques = 0;
    	for(int j = 0; j < m; j++)
    	{
    		zero += (s[j][i]=='0');
    		one += (s[j][i] == '1');
    		ques += (s[j][i] == '?');
    	}
    	if(zero >= one)
    	{
    		ll x = min(ques, zero-one);
    		one += x;
    		ques -= x;
    	}
    	else
    	{
    		ll x = min(ques, one-zero);
    		zero += x;
    		ques -= x; 
    	}
    	zero += (ques/2);
    	one += (ques/2);
    	if(ques%2) one++;
    	cnt[i] = 1ll*zero*one;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++)  ans += 1ll*cnt[i];
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