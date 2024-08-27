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
    ll m, k, a, b; cin >> m >> k >> a >> b;
   	ll x = m-k*min(b, m/k)-a;
   	if(x <= 0)
   	{
   		cout << 0 << "\n";
   		return;
   	}
   	ll ans = x/k;
   	ll op1 = x%k, op2 = k-(x%k);
   	op2 -= min(op2, a);
   	if(op2 == 0) cout << min(ans+1, ans+op1) << "\n";
   	else cout << ans+op1 << "\n";
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