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

ll power(ll x)
{
    ll ans = 1;
    while(x--) ans *= 2;
    return ans;
}
void solve()
{
    ll n; cin >> n;
    ll m = n; vii v;
    while(m)
    {
        v.pb(m % 2);
        m /= 2;
    }
    reverse(v.begin(), v.end());
    int one = 0, zero = 0;
    bool f = 1;
    for(auto x : v)
    {
        if(x == 0) zero++;
        else if(x && zero == 0) one++;
        else
        {
            f = 0;
            break;
        }
    }
    if(f) cout << 0 << '\n';
    else
    {
        vii v2; int i;
        for(i = 0; i < v.size(); i++)
        {
            if(v[i] == 0)
            {
                v2.pb(1);
                break;
            }
            v2.pb(v[i]);
        }
        ++i;
        while(i < v.size()) v2.pb(0), i++;
        reverse(v2.begin(), v2.end());
        for(i = 0; i < v2.size() - 1; i++)
            if(v2[i + 1] == 1) break;
        ll ans = 0; i++;
        while(i < v2.size())
        {
            ans += power(i);
            i++;
        }
        cout << ans - n << '\n';
    }
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