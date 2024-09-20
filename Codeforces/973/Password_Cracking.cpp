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
    int n; cin >> n;
    
    string s = "0";
    cout << "? 0" << "\n"; cout.flush();
    int f;
    cin >> f;
    if(f == 0)
    {
    	s = "1";
    	for(int i = 1; i < n; i++) s += "1";
    	cout << "! " << s <<"\n"; cout.flush();
    	return;
    }
	while(s.size() != n)
	{
		string tmp = s;
		tmp += "0";
		cout << "? " << tmp << "\n"; cout.flush();
		cin >> f;
		if(f)
		{
			s += "0";
			continue;
		}
		tmp = s; tmp += "1";
		cout << "? " << tmp << "\n"; cout.flush();
		cin >> f;
		if(f)
		{
			s += "1";
			continue;
		}
		break;
	}
	while(s.size() != n)
	{
		string tmp; tmp = "0";
		tmp += s;
		cout << "? " << tmp <<"\n"; cout.flush();
		cin >> f;
		if(f) s = "0"+s;
		else s = "1"+s;
	}
	cout << "! " << s << "\n"; cout.flush();
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