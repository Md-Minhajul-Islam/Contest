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
    int i = 0;
    bool f = 1;
    while(i+1 < n && a[i] <= a[i+1]) i++;
    i++;
    int ind = i;
    while(i < n)
    {
        if(a[i] > a[0]) f = 0;
        i++;
    }
    if(f)
    {
        for(int j = ind; j+1 < n; j++) 
            if(a[j] > a[j+1]) f = 0;
    }
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