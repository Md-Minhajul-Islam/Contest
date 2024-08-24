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
    ll k, n; cin >> n >> k;
    ll ans = 1;
    for(int i = n; i >= 1; i--)
    {
        if(i*k <= n)
        {
            ans = i; break;
        }
    }
    ll tem = ans;
    while(k--){
        cout << tem << ' ';
        tem += ans; 
    }
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