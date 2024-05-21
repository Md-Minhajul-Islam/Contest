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
    int x, y; cin >> x >> y;
    int sc = 0, rem = 0;
    sc = y/2; 
    rem = 7*sc;
    if(y%2) sc += 1, rem += 11;
    if(rem < x)
    {
        sc += (x - rem) / 15;
        if((x - rem) % 15) sc++;
    }
    cout << sc << '\n';
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