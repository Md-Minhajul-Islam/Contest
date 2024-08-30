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
    int n, x, k; cin >> n >> x >> k;
    
    int a[509] = {0};
    for(int i = 0; i < n; i++)
    {
    	ll p; cin >> p;
    	a[p]++;
    }
    int freq_1[509], freq_2[509];
    freq_1[0] = freq_2[0] = 0;
    for(int i = 1; i <= 505; i++)
    {
    	freq_1[i] = freq_1[i-1]+(a[i] >= 1);
    	freq_2[i] = freq_2[i-1]+(a[i] >= 2);
    }

    ll mx = 0;
    for(int i = 500; i >= 1; i--)
    {
    	if(a[i] && i < x*k)
    	{
    		mx = freq_1[i]; 
    		break;
    	}
    }
    int start = -1;
    for(int i = 500; i >= 1; i--)
    {
    	if(a[i] && i < x)
    	{
    		if(start == -1) start = i;
    		x = i;
    		int ind = min(505, x*k)-1;
    		int multiple_kill = min(start, ind);
    		ll tot = freq_2[multiple_kill]-freq_2[i-1]+freq_1[max(ind, start)];
    		mx = max(mx, tot);
    	}
    }
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