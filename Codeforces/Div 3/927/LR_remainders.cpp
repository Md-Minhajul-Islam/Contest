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
    ll n, m; cin >> n >> m; ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= m;
    }
    string s; cin >> s;
    int l = 0, r = n-1, j = 0;
    while(l != r)
    {
        if(s[j] == 'L')l++;
        else r--;
        j++;
    }
    vii v;
    j = n-2;
    v.pb(a[l]);
    while(l >= 0 && r <= n-1 && j >= 0)
    {
        if(s[j] == 'L')
            v.pb((v.back()*a[--l])%m);
        else 
            v.pb((v.back()*a[++r]) % m);
        j--;
    }
    reverse(v.begin(), v.end());
    for(auto &x: v) cout << x << ' ';
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