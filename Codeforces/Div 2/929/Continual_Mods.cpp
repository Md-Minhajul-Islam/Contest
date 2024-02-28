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
    int cnt = 0, mn = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == mn) cnt++;
        else if(a[i] < mn)
        {
            mn = a[i];
            cnt = 1;
        }
    }
    if(cnt == 1)
    {
        cout << "YES\n";
        return;
    }
    bool m = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]%mn) m = 1;
    }
    
    if(m) cout << "YES\n";
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