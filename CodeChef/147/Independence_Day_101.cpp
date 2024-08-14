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


bool cmp(pair<char, int> a, pair<char, int> b)
{
	return a.se > b.se;
}

void solve()
{
    int a, b, c; cin >> a >> b >> c;
    pair<char, int> s[3];
    string p;
    s[0].fi = 'a', s[0].se = a;
    s[1].fi = 'b', s[1].se = b;
    s[2].fi = 'c', s[2].se = c;

    while(s[0].se || s[1].se || s[2].se)
    {
    	sort(s, s+3, cmp);
    	if(s[0].se && p.size() == 0) p += s[0].fi, s[0].se--;
    	else if(s[0].se && s[0].fi != p[p.size()-1]) p += s[0].fi, s[0].se--;
    	else if(s[1].se && s[1].fi != p[p.size()-1]) p += s[1].fi, s[1].se--;
    	else if(s[2].se && s[2].fi != p[p.size()-1]) p += s[2].fi, s[2].se--;
    	else break;
    }


    // string s;
    // while(a || b || c)
    // {
    // 	if(a && b == 0 && c == 0) s += 'a', a--;
    // 	if(b && a == 0 && b == 0) s += 'b', b--;
    // 	if(c && a == 0 && b == 0) s += 'c', c--;

    // 	if(b && b >= a && b >= c)
    // 	{
    // 		if(s.size()==0) s += 'b', b--;
    // 		else if(s[s.size()-1] != 'b') s += 'b', b--;
    // 		else if(a && a >= c) s += 'a', a--;
    // 		else s += 'c', c--;

    // 	}
    // 	if(a && a >= b && a >= c)
    // 	{
    // 		if(s.size()==0) s += 'a', a--;
    // 		else if(s[s.size()-1] != 'a') s += 'a', a--;
    // 		else if(b && b >= c) s += 'b', b--;
    // 		else s += 'c', c--;

    // 	}
    // 	if(c && c >= a && c >= b)
    // 	{
    // 		if(s.size()==0) s += 'c', c--;
    // 		else if(s[s.size()-1] != 'c') s += 'c', c--;
    // 		else if(a && a >= b) s += 'b', b--;
    // 		else s += 'a', a--;

    // 	}
    // }
    if(p.size() != a+b+c)
    {
    	no; return;
    }
    for(int i = 0; i < p.size()-1; i++)
    {
    	if(p[i]==p[i+1])
    	{
    		no; return;
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