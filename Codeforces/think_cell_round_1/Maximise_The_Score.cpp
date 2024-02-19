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
    ll a[2*n];
    for(int i = 0; i < 2*n; i++) cin >> a[i];
    ll sum = 0ll;
    sort(a, a+2*n);
    for(int i = 2*n-2; i >= 0; i-=2)
        sum += a[i];
    cout << sum << '\n';
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