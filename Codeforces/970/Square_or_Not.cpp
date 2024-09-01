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
   ll n; cin >> n;
    string s; cin >> s;
    ll consi_zero = 0, cnt = 0;
    for(int i = 0; i < n; i++) 
    {
    	if(s[i] == '0') cnt++;
    	else 
    	{
    		consi_zero = max(consi_zero, cnt); cnt = 0;
    	}
    }
    if(consi_zero == 0)
    {	
    	if(n==4) yes;
    	else no;
    	return;
    }
    ll col = consi_zero+2;
    string a, b;
    for(int i = 0; i < col; i++) a += '1';
    b += '1';
    for(int i = 0; i < consi_zero; i++) b += '0';
    b += '1';
	if(1ll*col*col != n)
	{
		no; return;
	}
	int k = -1;
	for(int i = 0; i < col; i++)
	{
		if(i == 0 || i == col-1)
		{
			for(int j = 0; j < col; j++)
			{
				if(a[j] != s[++k])
				{
					no; return;
				}
			}
		}
		else
		{
			for(int j = 0; j < col; j++)
			{
				if(b[j] != s[++k])
				{
					no; return;
				}
			}
		}
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