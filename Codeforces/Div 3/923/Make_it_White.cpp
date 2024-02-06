
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
    string s; cin >> s;
    int l = -1;
    for(int i = 0; i < n; i++) 
        if(s[i] == 'B'){
            l = i; break;
        }
    int r = -1;
    for(int i = n-1; i >= 0; i--)
        if(s[i] == 'B') {
            r = i; break;
        }
    if(l == -1) cout << 0 << '\n';
    else cout << r-l+1 <<  '\n';
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