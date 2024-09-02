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
    int a, b, c; cin >> a >> b >> c;
    if(a+b < c)
    {
        if((c-a-b)%2) cout << -1 <<'\n';
        else cout << a+b << '\n';
        return;
    }
    if((a+b+c)%2 == 0) cout << (a+b+c)/2 << "\n";
    else cout << -1 << "\n";
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