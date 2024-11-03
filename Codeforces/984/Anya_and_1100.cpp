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

int test_case;

void solve()
{
    string s; cin >> s;
    int q; cin >> q;
    int tot = 0;
    for(int i = 0; i < s.size()-3; i++)
    {
    	if(s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0') tot++;
    }
    while(q--)
    {
    	int ind; cin >> ind; ind--;
    	char ch; cin >> ch;
    	int l = max(0, ind-3);
    	int r = min((int)s.size()-1, ind+3);
    	int prev = 0;
    	for(int i = l; i <= r-3; i++)
    	{
    		if(s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0') prev++;

    	}
    	int curr = 0;

    	s[ind] = ch;
    	for(int i = l; i <= r-3; i++)
    	{
    		if(s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0') curr++;

    	}
    	if(prev < curr) tot += curr-prev;
    	else if(prev > curr) tot -= (prev-curr);
    	if(tot > 0) yes;
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

    int t_case; cin >> t_case;
    for(test_case = 1; test_case <= t_case; test_case++)
    {
        solve();
    }
    return 0;
}