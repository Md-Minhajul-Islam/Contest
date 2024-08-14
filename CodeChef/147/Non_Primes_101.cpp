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


bool not_prime(int n)
{
	for(int i = 2; i*i <= n; i++)
	{
		if(n%i == 0)
		{
			
			return true;
		}
	}
	return false;
}


void solve()
{
    int n; cin >> n;
    vii cnt(110, 0);
    
    int ind1 = -1, ind2 = -1;

    for(int i = 1; i <= n; i++)
    {

    	int x; cin >> x;
    	

    	if(cnt[x] == 0) cnt[x] = i;
    	else if(x != 1)
    	{
            if(ind1 == -1) ind1 = cnt[x], ind2 = i;
    	}

    }
    debug(cnt);
    if(ind1 != -1)
    {
        cout << ind1 << " " << ind2 << "\n";
        return;
    }


    for(int i = 1; i <= 100; i++)
    {
    	if(cnt[i] == 0) continue;
    	for(int j = i+1; j <= 100; j++)
    	{
    		if(cnt[j] == 0) continue;

    		if(not_prime(i+j))
    		{

    			cout << cnt[i] << " " << cnt[j] << "\n";
    			return;
    		}
    	}
    }
    cout << -1 << "\n";

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