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
    int n; cin >> n;
    int lo = INT_MIN, hi = INT_MAX;
    set<int> st;
    while(n--)
    {
        int a, x; cin >> a >> x;
        if(a == 1) lo = max(lo, x);
        else if(a == 2) hi = min(hi, x);
        else st.insert(x);
    }
    int ans = 0, cnt = 0;
    for(auto &temp: st)
    {
        if(temp >= lo && temp <= hi) cnt++;
    }
    // cout << lo << ' ' << hi << '\n';
    ans = (hi-lo+1)-cnt;
    cout << max(ans, 0) << '\n';
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