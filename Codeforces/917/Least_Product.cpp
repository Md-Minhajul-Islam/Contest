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
    int a[n];
    int neg = 0;
    int zero = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < 0) neg++;
        else if(a[i] == 0) zero++;
    }
    if(neg%2 || zero) cout << 0 << '\n';
    else
    {
        cout << 1 << '\n';
        cout << 1 << ' ' << 0 << '\n';
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