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

    vll possible_sum;
    vector<bool> taken(n*n+5, 0);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(taken[i*j] == 0) possible_sum.pb(i*j), taken[i*j] = 1;

    ll mx = -1;
    for(int i = 0; i < possible_sum.size(); i++)
    {
        ll target = possible_sum[i];
        set<int> s; bool f = 0;
        for(int j = 1; j <= n; j++) s.insert(j);
        ll sum = 0, mx2 = -1;
        for(int j = n; j >= 1; j--)
        {
            
            if(s.lower_bound((target/j)+1) == s.begin())
            {
                f = 1; break;
            }
            int val = *(--s.lower_bound((target/j)+1));
            s.erase(val);
            sum += val*j;
            mx2 = max(mx2, 1ll*val*j);
        }
        if(f) continue;
        mx = max(mx, sum-mx2);
    }
    cout << mx << "\n";
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