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
    int n, x; cin >> n >> x;
    int ans = 0;
    for(int i = 1; i*i <= (n-x); i++)
    {
        if((n-x)%i == 0)
        {
            if(i%2 == 0 && (i+2)/2 >= x) ans++;
            if(i*i != (n-x) && ((n-x)/i)%2 == 0 && ((n-x)/i+2)/2>=x) ans++;
        }
    }
    for(int i = 1; x!=1 && i*i <= (n+x-2); i++)
    {
        if((n+x -2)%i == 0)
        {
            if(i%2 == 0 && (i+2)/2 > x) ans++;
            if(i*i!=(n+x-2) && ((n+x-2)/i)%2==0 && ((n+x-2)/i+2)/2 > x) ans++;
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