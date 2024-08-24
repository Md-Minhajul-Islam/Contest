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
    ll a, b; cin >> a >> b;
    ll diff = abs(a-b);
    ll low = 0ll, high = diff, n = 0ll;
    while(low <= high)
    {
        ll mid = low+(high-low)/2;
        if((mid*(mid+1)/2) <= diff)
            n = mid, low = mid+1;
        else high = mid-1;
    }
    if(n*(n+1)/2 == diff) cout << n << '\n';
    else
    {
        n++;
        if((n*(n+1)/2-diff)%2 == 0) 
            cout << n << '\n';
        else 
        {
            n++;
            if((n*(n+1)/2-diff)%2 == 0)
                cout << n << '\n';
            else cout << n+1 << '\n';
        }
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