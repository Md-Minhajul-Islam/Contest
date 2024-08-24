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
    ll a, b, k; cin >> a >> b >> k;
    ll ans = 0;
    while(a != b)
    {
        if(b%k == 0 && b/k >= a) ans++, b /= k;
        else if(b%k == 0)
        {
            ans += b-a;
            break;
        }
        else ans += b%k, b -= b%k;
    }
    cout << ans <<"\n";
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