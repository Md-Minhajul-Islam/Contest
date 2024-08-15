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
    ll n, m, k; cin >> n >> m >> k;
    ll w; cin >> w;
    ll b[w]; 
    for(int i = 0; i < w; i++) cin >> b[i];
    
    vll v;
    for(ll i = 1; i <= n; i++)
        for(ll j = 1; j <= m; j++)
        {

            ll lbx = max(1ll, j-k+1);
            ll ubx = min(m, j+k-1);
            ll x = ubx-lbx-k+2;
            ll lby = max(1ll, i-k+1);
            ll uby = min(n, i+k-1);
            ll y = uby-lby-k+2;
            //cout << y << "\t";
            v.pb(1ll*x*y);
            
        }
    sort(v.begin(), v.end(), greater<>());
    sort(b, b+w, greater<>());
    ll sum = 0;
    for(int i = 0; i < w; i++)
    {
        sum += 1ll*v[i]*b[i];
    }
    //if(sum == 724) cout << n << m << k;

    cout << sum << "\n";
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