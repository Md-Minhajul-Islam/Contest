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
    vii v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];

    int pref_one[n+5], pref_two[n+5], pref_three[n+5];
	pref_one[0] = 0; pref_two[0] = 0; pref_three[0] = 0;
	for(int i = 0; i < n; i++)
	{
		pref_one[i+1] = pref_one[i];
		pref_two[i+1] = pref_two[i];
		pref_three[i+1] = pref_three[i];
		if(v[i] == 1) pref_one[i+1]++;
		if(v[i] == 2) pref_two[i+1]++;
		if(v[i] == 3) pref_three[i+1]++;
	}
	while(q--)
	{
		int l, r; cin >> l >> r;
		int one = pref_one[r]-pref_one[l-1];
		int two = pref_two[r]-pref_two[l-1];
		int three = pref_three[r]-pref_three[l-1];

		if(one == two+three) yes;
		else if(two == one+three) yes;
		else if(three == one+two) yes;
		else no;
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