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
 
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.se < b.se;
}
void solve()
{
    ll n, l; cin >> n>> l;
    pair<ll, ll> a[n];
    for(int i = 0; i < n; i++) cin >> a[i].fi >> a[i].se;
    sort(a, a+n, cmp);
    int len = 0;
    for(int i = 0; i < n; i++)
    {
        priority_queue<ll> pq;
        ll sum = 0;
        for(int j = i; j < n; j++)
        {
            pq.push(a[j].fi);
            sum += a[j].fi;
            while(!pq.empty() && sum+a[j].se-a[i].se > l)
            {
                sum -= pq.top();
                pq.pop();
            }
            len = max(len, (int)(pq.size()));
        }
    }
    cout << len << '\n';

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