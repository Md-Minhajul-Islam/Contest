// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair

int m;
ll x, cost[55], hap[55];

ll fun(int i, ll mon, int h, vvll &dp1, vvll &dp2)
{
    if(i == m) return 0;
    if(dp1[i][h] != -1 && dp2[i][h] >= mon) return dp1[i][h];
    dp2[i][h] = mon;
    ll take = 0, not_take = 0;
    if(mon >= cost[i]) take = fun(i+1, mon-cost[i]+x, h+hap[i], dp1, dp2)+hap[i];
    not_take = fun(i+1, mon+x, h, dp1, dp2);
    return dp1[i][h] = max(take, not_take);
}


void solve()
{
    int h = 0;
    cin >> m >> x;
    for(int i = 0; i < m; i++)
        cin >> cost[i] >> hap[i], h += hap[i];
    vvll dp1(m+1, vll(h+5, -1));
    vvll dp2(m+1, vll(h + 5, 0));
    cout << fun(0, 0, 0, dp1, dp2) << '\n';
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