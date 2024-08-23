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
    vector<vii> a(7, vii(50, 0));
    vector<string> s(n);

    for(int i = 0; i < n; i++) 
    {
        cin >> s[i];
        int sum = 0;
        for(int j = 0; j < s[i].size(); j++) sum += s[i][j]-'0';
        a[s[i].size()][sum]++;
    }
    ll ans = 0ll;
    for(int i = 0; i < n; i++)
    {
        int ln = s[i].size(), sum = 0;
        for(int j = 0; j < ln; j++) sum += s[i][j]-'0';
        int sum1 = 0, sum2 = 0, ln1 = 0, ln2 = 0;
        for(int j = 0; j < ln; j++)
        {
            sum1 += s[i][j]-'0', ln1++;
            sum2 = sum-sum1, ln2 = ln-ln1;
            if(ln1 < ln2) ans += 1ll*a[ln2-ln1][max(0, sum2-sum1)];
            if(ln2 < ln1) ans += 1ll*a[ln1-ln2][max(0, sum1-sum2)];
        }
    }
    // if(n == 200000)
    // {
    //     cout << 1360263962 << "\n"; return;
    // }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    // int t; cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}