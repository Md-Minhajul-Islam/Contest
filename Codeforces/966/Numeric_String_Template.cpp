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
    ll a[n];
    map<ll, ll> mp;
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
        mp[a[i]]++;
    }

    ll m; cin >> m;
    for(int i = 0; i < m; i++)
    {
    	string s; cin >> s;
    	//cout << s << " ";
    	if(s.size() != n)
    	{
    		no;
    	}
    	else
    	{
    		bool f = 1;
    		int ln = s.size();
    		vii mat[26];
    		for(int i = 0; i < ln; i++) mat[s[i]-'a'].pb(i);

    		//bool cnt[n]; memset(cnt, 0, sizeof(cnt));
            ll tot = 0;
    		for(int i = 0; i < 26; i++)
    		{
    			if(mat[i].size() == 0) continue;
    			ll p = a[mat[i][0]];
                if(mat[i].size() != mp[a[mat[i][0]]])
                {
                    f = 0; break;
                }
                
    			for(auto x: mat[i])
    			{
    				if(a[x] != p)
    				{
    					f = 0; break;
    				}
    			}
    			if(f==0) break;
    		}    		
    		if(f) yes;
    		else no;
    	}

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