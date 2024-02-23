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
    int n; cin >> n; ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    vll v;
    for(int i = 0; i < n; i++)
    {
        if(v.empty() || v.back() < a[i]) v.pb(a[i]);
        else
        {
            ll x = (v.back()+a[i]-1)/a[i]; 
            if(x*a[i] == v.back()) x++; 
            v.pb(x*a[i]);
        }
    }
    cout << v.back() << '\n';
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