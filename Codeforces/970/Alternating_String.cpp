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
    string s; cin >> s;
    if(n%2 == 0)
    {
    	int cnt_even[26] = {0};
    	int cnt_odd[26] = {0};
    	for(int i = 0; i < n; i++)
    	{
    		if(i%2) cnt_odd[s[i]-'a']++;
    		else cnt_even[s[i]-'a']++;
    	}
    	int mx1 = 0, mx2 = 0;
    	for(int i = 0; i < 26; i++)
    	{
    		mx1 = max(mx1, cnt_odd[i]);
    		mx2 = max(mx2, cnt_even[i]);
    	}
    	cout << n-mx1-mx2 <<"\n";
    }
    else
    {
    	s = "*"+s;
    	int mat_even[26][n+1], mat_odd[26][n+1];
    	memset(mat_even, 0, sizeof(mat_even));
    	memset(mat_odd, 0, sizeof(mat_odd));
    	for(int i = 1; i <= n; i++)
    	{
    		for(int j = 0; j < 26; j++) mat_odd[j][i] = mat_odd[j][i-1], mat_even[j][i] = mat_even[j][i-1];
    		if(i%2) mat_odd[s[i]-'a'][i]++;
    		else mat_even[s[i]-'a'][i]++;
    	}
    	int ans = 1e9;
    	for(int i = 1; i <= n; i++)
    	{
    		int cnt1[26] = {0}, cnt2[26] = {0};
    		for(int j = 0; j < 26; j++)
    		{
    			cnt1[j] = mat_even[j][i-1]+mat_odd[j][n]-mat_odd[j][i];
    			cnt2[j] = mat_odd[j][i-1]+mat_even[j][n]-mat_even[j][i];
    		}
    		int mx1 = 0, mx2 = 0;
    		for(int j = 0; j < 26; j++)
    			mx1 = max(mx1, cnt1[j]), mx2 = max(mx2, cnt2[j]);
    		ans = min(ans, n-1-mx1-mx2);
    	}
    	cout << ans+1 << "\n";
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