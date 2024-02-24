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
    int a, b; cin >> a >> b;
    bool f = 1;
    if(a%2 && b%2) f = 0;
    else
    {
        if(a%2 == 1 || b%2 == 1)
        {
            if(a%2 && b/2 == a) f = 0;
            else if(b%2 && a/2 == b) f = 0;
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