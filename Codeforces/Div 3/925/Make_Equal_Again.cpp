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
    int i = 0, j = n-1;
    while(i+1 < n && a[i] == a[i+1]) i++;
    while(j-1 >= 0 && a[j] == a[j-1]) j--;
    if(i >= j)
    {
        cout << 0 << '\n';
        return;
    }
    if(a[i] == a[j]) cout << j-i-1 << '\n';
    else if(i+1 > n-j) cout << n-i-1 << '\n';
    else cout << j << '\n';
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