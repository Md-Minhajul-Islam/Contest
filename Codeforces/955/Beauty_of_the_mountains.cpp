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
    int n, m, k; cin >> n >> m >> k;
    ll a[n+1][m+1]; char b[n+1][m+1];
    for(int i = 1; i <= n; i++)
    	for(int j = 1; j <= m; j++) cin >> a[i][j];
    for(int i = 1; i <= n; i++)
    	for(int j = 1; j <= m; j++) cin >> b[i][j];

    ll tot1 = 0, tot2 = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            if(b[i][j] == '0') tot1 += a[i][j];
            else tot2 += a[i][j];
        }

    ll pref_b[n+1][m+1];
    memset(pref_b, 0, sizeof(pref_b));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            pref_b[i][j] = (b[i][j]=='1')+pref_b[i-1][j]+pref_b[i][j-1]-pref_b[i-1][j-1];

    vll diff;
    for(int i = 1; i <= (n-k+1); i++)
        for(int j = 1; j <= (m-k+1); j++)
        {
            int x1 = i, y1 = j, x2 = i+k-1, y2 = j+k-1; 
            int one = pref_b[x2][y2]-pref_b[x1-1][y2]-pref_b[x2][y1-1]+pref_b[x1-1][y1-1];
            int zero = k*k-one;
            if(abs(one-zero)) diff.pb(abs(one-zero));
        }
    ll gcd = 0;
    for(int i = 0; i < diff.size(); i++)
    {
        gcd = __gcd(diff[i], gcd);
    }

    if((gcd == 0 && abs(tot1-tot2) == 0) || (gcd != 0 && abs(tot1-tot2)%gcd == 0)) yes;
    else no;

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