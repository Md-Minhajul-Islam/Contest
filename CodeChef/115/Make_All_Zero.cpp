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
    vii v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vii temp;
    temp.pb(v[0]);
    int mn = v[0];
    for(int i = 1; i < n; i++)
    {
        if(v[i] <= mn)
        {
            temp.pb(v[i]); mn = v[i];
        }
    }
    reverse(temp.begin(), temp.end());
    int ans = n;
    for(int i = 0; i < temp.size(); i++)
    {
        ans = min(ans, temp[i]+n-i-1);
    }
    cout << ans << '\n';
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