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

ll fun(vii &a, vii &ar, vii &mark, int n)
{
	ll tot = 0;
	for(int i = 0; i < n; i++)
	{
		if(ar[i] != a[i])
		{

			int n1 = a[i], n2 = ar[i], ind1 = mark[a[i]], ind2 = mark[ar[i]]; 
			swap(a[ind1], a[ind2]);
			mark[n1] = ind2, mark[n2] = ind1;

			tot++;
		}

	}
	return tot; 
}

void solve()
{
    int n; cin >> n;
    int ln = 2e5+5;
    vii mark1(ln, -1), mark2(ln, -1), a(n), b(n), ar(n);

    for(int i = 0; i < n; i++)
    {
    	cin >> ar[i];
    	a[i] = ar[i];
    	mark1[a[i]] = i;
    }
    bool f = 1;
    for(int i = 0; i < n; i++)
    {
    	cin >> b[i];
    	mark2[b[i]] = i;
    	if(mark1[b[i]] == -1) f = 0;
    }
    if(f == 0){no; return;}
    sort(ar.begin(), ar.end());

    ll cnt1 = fun(a, ar, mark1, n);
    ll cnt2 = fun(b, ar, mark2, n);
    
    
    if(abs(cnt1-cnt2)%2) no;
    else yes;

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