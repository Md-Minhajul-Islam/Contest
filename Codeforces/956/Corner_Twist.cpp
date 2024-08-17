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
    int a[n][m], b[n][m];
    for(int i = 0 ; i < n; i++)
    	for(int j = 0; j < m; j++) 
    	{
    		char c; cin >> c;
    		a[i][j] = c-'0';
    	}
    for(int i = 0 ; i < n; i++)
    	for(int j = 0; j < m; j++) 
    	{
    		char c; cin >> c;
    		b[i][j] = c-'0';
    	}
    for(int i = 0; i < n-1 ;i++)
    {
    	for(int j = 0; j < m-1; j++)
    	{
    		if(a[i][j] != b[i][j])
    		{
    			a[i][j] = (a[i][j]+1)%3;
    			a[i+1][j+1] = (a[i+1][j+1]+1)%3;
    			a[i][j+1] = (a[i][j+1]+2)%3;
    			a[i+1][j] = (a[i+1][j]+2)%3;
    		}
    		if(a[i][j] != b[i][j])
    		{
    			a[i][j] = (a[i][j]+1)%3;
    			a[i+1][j+1] = (a[i+1][j+1]+1)%3;
    			a[i][j+1] = (a[i][j+1]+2)%3;
    			a[i+1][j] = (a[i+1][j]+2)%3;
    		}
    	}
    }
    for(int i = 0; i < n ;i++)
    	for(int j = 0; j < m; j++)
    		if(a[i][j] != b[i][j])
    		{
    			no; return;
    		}
    yes;
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