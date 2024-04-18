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
    int ans = 0;
    int i = 1;
    bool f = 0;
    while(i < n)
    {
        if(f)
        {
            if(s[i] == '1') s[i] = '0';
            else s[i] = '1';
        }
        if(s[i] != s[i-1])
        {
            i++; continue;
        }
        else
        {
            if(f) f = 0;
            else f = 1;
            if(s[i] == '1') s[i] = '0';
            else s[i] = '1';
            ans++; i++;
        }
    }
    cout << ans << '\n';
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