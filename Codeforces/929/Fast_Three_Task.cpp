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
    int cnt = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        sum += x;
        if(x%3 == 1) cnt++;
    }
    if(sum%3 == 0) cout << 0 << '\n';
    else if(3-(sum%3) == 1 || n == 1) cout << 1 << '\n';
    else 
    {
        if(cnt) cout << 1 << '\n';
        else cout << 2 << '\n';
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