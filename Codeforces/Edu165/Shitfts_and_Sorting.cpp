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
    string s; cin >> s;
    ll n = (ll)s.size();
    ll i = 0, j = 0;
    ll ans = 0;
    while(j < n)
    {
        if(s[i] == '0' && s[j] == '0')
        {
            i++, j++;
            continue;
        }
        if(s[j] == '1')
        {
            j++;
        }
        else if(s[j] == '0')
        {
            ans += j-i+1;
            swap(s[i], s[j]);
            i++, j++;
        }
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