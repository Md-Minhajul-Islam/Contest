// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

void solve()
{
    ll n, k; cin >> n >> k;
    ll a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++)
    {
        ll x; cin >> x;
        if(x < 0) x *= -1;
        v[x] += a[i];
    }
    bool f = 1;
    ll rem = 0, dis = 0;
    for(int i = 1; i <= n; i++)
    {
        if(v[i] == 0) continue;
        ll sec = ((v[i]-rem)+k-1)/k;
        if(sec > i-dis)
        {
            f = 0; 
            break;
        }
        else{
            rem = sec*k+rem-v[i];
            dis += sec;
        }
    }
    if(f) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}