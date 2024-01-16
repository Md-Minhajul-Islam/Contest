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
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i%2) a[i] *= (-1ll);
    }
    vll pref(n);
    pref[0] = a[0];
    for(int i = 1; i < n; i++) pref[i] = pref[i-1] + a[i];
    bool f = 0;
    map<ll, ll> um;
    for(int i = 0; i < n; i++)
    {
        if(um[pref[i]] || pref[i] == 0)
        {
            f = 1; break;
        }
        um[pref[i]]++;
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