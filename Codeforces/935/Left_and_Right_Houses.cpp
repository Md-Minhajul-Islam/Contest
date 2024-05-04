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
    string s; cin >> s;
    s = "*"+s;
    int zero[n+2], one[n+2];
    memset(zero, 0, sizeof(zero));
    memset(one, 0, sizeof(one));
    zero[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        if(s[i] == '0') zero[i] = 1+zero[i-1];
        else zero[i] = zero[i-1];
    }
    zero[n+1] = zero[n];
    one[n+1] = 0;
    for(int i = n; i >= 1; i--)
    {
        if(s[i] == '1') one[i] = 1+one[i+1];
        else one[i] = one[i+1];
    }
    one[0] = one[1];
    vii v;
    for(int i = 0; i <= n; i++)
    {
        int zr = (i+1)/2;
        int on = (n-i+1)/2;
        if(zr <= zero[i] && on <= one[i+1]) v.pb(i);
    }
    double mn = INT_MAX;
    int ind = 10000000;
    for(auto x: v)
    {
        if(abs(n/2.0-x) < mn)
        {
            mn = abs(n/2.0-x);
            ind = x;
        }
        else if(abs(n/2.0-x) == mn)
        {
            ind = min(ind, x);
        }
    }
    cout << ind << '\n';
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