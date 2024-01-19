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
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(n == 1 || n == 2) cout << -1 <<  '\n';
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 1) cout << 3 << ' ';
            else if(a[i] == 3) cout << 1 <<  ' ';
            else cout << a[i] << ' ';
        }
        cout << '\n';
    }
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