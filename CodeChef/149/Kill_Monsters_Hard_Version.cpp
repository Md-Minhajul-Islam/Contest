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
    ll n, x, k; cin >> n >> x >> k;
    vll a(n+1); a[0] = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    ll freq_1[n+5], freq_2[n+5];
    freq_1[0] = freq_2[0] = 0; ll prev1 = -1, prev2 = -1;
    sort(a.begin(), a.end());
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == prev1 && a[i] == prev2)
        {
            freq_1[i] = freq_1[i-1];
            freq_2[i] = freq_2[i-1];
        }
    	else if(prev1 == a[i])
        {
            freq_1[i] = freq_1[i-1];
            freq_2[i] = freq_2[i-1]+1;
        }
        else
        {
            freq_1[i] = freq_1[i-1]+1;
            freq_2[i] = freq_2[i-1];
        }
        prev2 = prev1, prev1 = a[i];
    }
    ll mx = 0;
    for(int i = n; i >= 1; i--)
    {
    	if(a[i] < 1ll*x*k)
    	{
    		mx = freq_1[i]; 
    		break;
    	}
    }
    int start = -1, prevx = -1;
    for(int i = n; i >= 1; i--)
    {

    	if(a[i] < x || prevx == a[i])
    	{
    		if(start == -1) start = i;
    		x = a[i];
    		int ind = lower_bound(a.begin(), a.end(), 1ll*x*k)-a.begin()-1;
            // cout << i << " " << ind << "\n";
    		int multiple_kill = min(start, ind);
            // cout << multiple_kill << "\n";
            // cout << freq_2[multiple_kill]-freq_2[i-1] << "\n";
            // ll tot = freq_1[max(ind, start)];
            // if(a[multiple_kill] == a[i-1])
    		ll tot = 0ll+freq_2[multiple_kill]-freq_2[i-1] + freq_1[max(ind, start)];
        // cout << tot << "\n";
    		mx = max(mx, tot);
            prevx = x;
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