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
vector<bool> v(1000005);
void solve()
{
    vector<bool> v(1000005, 0);
    int n, m, k; cin >> n >> m >> k;
    vii a;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(v[x] || x > k) continue;
        v[x] = 1;
        a.pb(x);
    }
    vector<bool> v1(1000005, 0);
    vii b;
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        if(v1[x] || x > k) continue;
        v1[x] = 1;
        b.pb(x);
    }
    int cnt[400009] = {0};
    for(int &x: a) cnt[x]++;
    for(int &x: b) cnt[x]++;
    int sa = a.size(), sb = b.size();
    if(sa < (k/2) || sb < (k/2))
    {
        cout << "NO\n";
        return;
    }
    for(int &x : a)
        if(cnt[x] > 1 && sa > (k/2)) cnt[x]--, sa--;
    for(int& x : b)
        if(cnt[x] > 1 ) cnt[x]--, sb--;

    if(sa == (k/2) && sb == (k/2)) cout << "YES\n";
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