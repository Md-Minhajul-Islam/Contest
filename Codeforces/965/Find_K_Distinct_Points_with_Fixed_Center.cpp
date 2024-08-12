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
    ll x, y, k; cin >> x >> y >> k;
    ll kx = x*k, ky = y*k;
    ll arr_x[k], arr_y[k];
    map<pii, bool> m;
    if(k%2)
    {
    	arr_x[0] = kx;
    	arr_y[0] = ky;

    	for(int i = 1, j = 100000000, p = 100000000; i < k; i+=2, j--, p--)
    	{
			arr_x[i] = j;
    		arr_y[i] = p;
    		arr_x[i+1] = -j;
    		arr_y[i+1] = -p;
    	}
    }
    else
    {
    	arr_x[0] = kx/2-1, arr_x[1] = kx/2+1;
    	arr_y[0] = ky/2-1, arr_y[1] = ky/2+1;
        
    	for(int i = 2, j = 100000000, p = 100000000; i < k; i+=2, j--, p--)
    	{
    		arr_x[i] = j, arr_x[i+1] = -j;
    		arr_y[i] = p, arr_y[i+1] = -p;
    	}
    }
    for(int i = 0; i < k; i++)
    {
    	cout << arr_x[i] << " " << arr_y[i] << "\n";
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