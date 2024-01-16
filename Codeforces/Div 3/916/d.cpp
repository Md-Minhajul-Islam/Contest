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
bool cmp(pii a, pii b)
{
    return a.first < b.first;
}
void solve()
{
    int n; cin >> n; pii a[n], b[n], c[n];
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        a[i] = mp(x, i);
    }
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        b[i] = mp(x, i);
    }
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        c[i] = mp(x, i);
    }
    sort(a, a+n, cmp); sort(b, b+n, cmp); sort(c, c+n, cmp);
    vector<pii> aa, bb, cc;
    int cnt = 1;
    while(cnt <= 3)
    {
        aa.pb(a[n-cnt]);
        bb.pb(b[n-cnt]);
        cc.pb(c[n-cnt]);
        cnt++;
    }
    // for(int i = 0; i < cc.size(); i++)
    // {
    //     cout << aa[i].first << "->" << aa[i].second << "-" << bb[i].first << "->" << bb[i].second << '-' << cc[i].first << "->" << cc[i].second << '\n';
    // }
    int mxm = -1;
    for(auto x: aa)
    {
        int ans = x.first;
        for(auto y: bb)
        {
            if(y.second != x.second)
            {
                int ans2 = y.first;
                for(auto z: cc)
                {
                    if(x.second != z.second && y.second != z.second)
                        mxm = max(mxm, ans+ans2+z.first);
                }
            }
        }
    }
    cout << mxm << '\n';
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