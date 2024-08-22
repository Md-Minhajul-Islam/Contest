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

const ll mod = 1000000007;

ll bin_expo(ll k)
{
    if(k == 0) return 1;
    if(k%2 == 0)
    {
        ll x = bin_expo(k/2);
        return x*x%mod;
    }
    else return 2ll*bin_expo(k-1)%mod;
}

void solve()
{
    ll n, k; cin >> n >> k;

    vll a(n);
    for(auto &x: a) cin >> x;

    sort(a.begin(), a.end());
    ll l = 1, r = 1e9, lim = 0;
    while(l <= r)
    {
        ll mid = (0ll+l+r)/2;
        int i = 0, kk = k;
        for( ; i < n && kk; i++)
        {
            ll x = a[i];
            while(kk && x*2ll <= mid) x *= 2ll, kk--;
            if(x*2ll < mid) break;
        }
        if(i == n) l = mid+1, lim = mid;
        else r = mid-1;
    }
    for(int i = 0; i < n && k; i++)
    {
        while(a[i]*2ll <= lim && k) a[i] *= 2ll, k--;
    }
    sort(a.begin(), a.end());
    ll each = k/n;
    k -= each*n;
    for(int i = 0; i < n && k; i++, k--) a[i] *= 2ll;
    ll two_to_the_power_each = bin_expo(each);
    ll sum = 0;
    for(int i = 0; i < n; i++) sum = (0ll+sum+a[i])%mod;
    sum = (1ll*sum*two_to_the_power_each)%mod;

    cout << sum << "\n";
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