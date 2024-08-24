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
    for(int i = 0; i < n; i++) cin >> a[i];
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = i+2; j < n; j++)
    //     {
    //         if(a[i] > a[j]) swap(a[i], a[j]);
    //     }
    // }
    // bool f = 1;
    // for(int i = 0; i < n-1; i++)
    // {

    //     if(a[i] > a[i+1])
    //     {
    //         f = 0; break;
    //     }
    // }
    if(n == 2 && a[0] > a[1])
    {
        cout << "NO\n";
    }
    else if(n == 3 && ((a[1] < a[0] && a[1] < a[2]) || (a[1] > a[0] && a[1] > a[2])))
    {
        cout << "NO\n";
    }
    else cout << "YES\n";
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