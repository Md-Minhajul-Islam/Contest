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
    int x; cin >> x;
    int a, b;
    a = 0, b = x;
    int mx = b-a;
    for(int i = 0; i < 32; i++)
    {
        int temp = (1<<i);
        int p, q;
        p = temp; q = p^x;
        if(abs(p-q) < mx)
        {
            a = p, b = q;
            mx = abs(p-q);
        }
    }
    cout <<min(a, b) << ' ' << max(a, b) <<'\n';
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