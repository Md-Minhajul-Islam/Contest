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
    char a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int ff = 0;
    if(a == 'W' && b == 'W' && c == 'W') ff = 1;
    else if(b == 'W' && c == 'W' && d == 'W') ff = 1;
    else if(c == 'W' && d == 'W' && e == 'W') ff = 1;
    else if(d == 'W' && e == 'W' && f == 'W') ff = 1;
    else ff = 0;
    if(ff) cout << "YES\n";
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