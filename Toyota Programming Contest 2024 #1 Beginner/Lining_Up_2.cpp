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
    int a[n+1];
    int st;
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        if(x == -1) st = i;
        else a[x] = i;
    }
    cout << st << ' ';
    --n;
    while(n--)
    {
        cout << a[st] << ' ';
        st = a[st];
    }
    cout << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // int t; cin >> t;
    // while(t--)
    // {
       solve();
    // }
    return 0;
}