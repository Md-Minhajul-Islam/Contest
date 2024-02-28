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

int cnt[300004];
ll nCr(ll n, ll r)
{
    if(r > n)
        return 0;
    vector<long long> nArr, rArr;
    for(long long i = n; i > max(r, n - r); i--)
        nArr.push_back(i);
    for(long long i = min(r, n - r); i > 0; i--)
        rArr.push_back(i);
    long long ans = 1;
    for(int i = rArr.size() - 1, j = nArr.size() - 1; i >= 0; i--, j--)
    {
        ans *= nArr[j];
        ans /= rArr[i];
    }
    return ans;
}
void solve()
{
    memset(cnt, 0, sizeof(cnt));
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        cnt[x]++;
    }
    ll ans = 0;
    ll prv = 0;
    for(int i = 0; i <= n; i++)
    {
        ll x = 0, y = 0;
        if(cnt[i] >= 3)
        {
            x = nCr(cnt[i], 3);
        }
        if(cnt[i] >= 2) y = nCr(cnt[i], 2);
        ans += x+(y*prv);
        prv += cnt[i];
    }
    cout << ans << '\n';
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