// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair
 
void solve()
{
    ll n; cin >> n;
    map<ll, ll> freq;
    for(int i = 1; i <= n; i++)
    {
        ll c; cin >> c;
        freq[c+i]++;
    }
    vll ans;
    while(!freq.empty())
    {
        pll tp = *freq.rbegin();
        freq.erase(tp.fi);

        ans.pb(tp.fi);
        tp.se--;
        if(tp.se)
        {
            tp.fi--;
            freq[tp.fi] += tp.se;
        }
    }
    for(auto x: ans)
        cout << x << ' ';
    cout << '\n';
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