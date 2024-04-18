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
    string op1;
    vii ind;
    for(int i = 0; i < n; i+=2)
    {
        if(s[i] == s[i+1]) continue;

        if(op1.size() == 0)
        {
            op1 += '0';
            if(s[i] == '0') ind.pb(i+1);
            else ind.pb(i+2);
        }
        else
        {
            if(op1[op1.size()-1] == '0')
            {
                op1 += '1';
                if(s[i] == '1') ind.pb(i+1);
                else ind.pb(i+2);
            }
            else
            {
                op1 += '0';
                if(s[i] == '0') ind.pb(i+1);
                else ind.pb(i+2);
            }
        }
    }
    cout << ind.size() << '\n';
    for(auto x: ind) cout << x << ' ';
    cout << '\n';
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