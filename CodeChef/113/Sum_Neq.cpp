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
    for(int i = 0; i < n; i++)cin >> a[i];
    ll s1 = a[0]+a[1];
    ll s2 = a[2];
    int f = 0;
    for(int i = 3; i < n; i++)
    {
        s2 += a[i];
        if(s1 != s2){
            f = 1; break;
        }
        s2 -= a[i];
    }
    if(f == 0)
    {
        s1 = a[n-1]+a[n-2];
        s2 = a[n-3];
        for(int i = n-4; i >= 0; i--)
        {
            s2 += a[i];
            if(s1 != s2) {
                f = 1; break;
            }
            s2 -= a[i];
        }
    }
    if(f) cout << "YES\n";
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