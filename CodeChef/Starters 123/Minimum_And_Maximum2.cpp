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
    ll n; cin >> n;
    if(n%2 == 0)
    {
        ll m = n/2;
        ll sum = (m*(m+1))/2;
        sum *= 2;
        cout << sum << '\n';
    }
    else
    {
        ll m = n/2;
        ll sum = (m*(m+1))/2;
        sum *= 2;
        sum += m+1;
        cout << sum << '\n';
    }
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