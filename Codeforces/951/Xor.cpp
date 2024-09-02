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

int setBitNumber(int n)
{
    int k = __builtin_clz(n);
    return 1<<(31-k);
}

void solve()
{
    int x, y; cin >> x >> y;
    int a = (1^x), b = (1^y);
    int a_set = setBitNumber(a);
    int b_set = setBitNumber(b);
    // cout << a_set << " " << b_set << "\n";
    vii v1, v2;
    for(int i = 0; i < a_set; i++)
    {
        v1.pb((a&(1<<i)));
    }
    for(int i = 0; i < b_set; i++)
    {
        v2.pb((b &(1<<i)));
    }
    // for(auto x: v1) cout << x << " ";
    // cout << '\n';
    // for(auto x : v2) cout << x << " ";
    // cout << '\n';

    // cout << a_set << " " << b_set << "\n";
    // cout << v1.size() << " " << v2.size() << "\n";
    int mn = min(v1.size(), v2.size());
    ll cnt = 0ll;
    for(int i = 0; i < mn; i++)
    {
        if(v1[i] == v2[i]) cnt++;
        else break;
    }
    ll ans = 1ll;
    for(ll i = 1; i <= cnt; i++) ans *= 2;
    cout << ans << "\n";
    // cout << cnt << "\n";
    // cout << powl(2ll, cnt) << '\n';

}
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}