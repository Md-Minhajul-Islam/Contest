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
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    bool f = 1;
    for(int i = 0; i+2 < n; i++)
    {
        int op = a[i];
        a[i] -= op;
        a[i+1] -= op*2;
        a[i+2] -= op;
        if(a[i+1] < 0 || a[i+2] < 0)
        {
            f = 0;
            break;
        }
    }
    if(a[n-1] != 0 || a[n-2] != 0) f = 0;
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