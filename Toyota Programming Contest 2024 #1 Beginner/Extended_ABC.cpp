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
    string s; cin >> s;
    // if(s[0] != 'A')
    // {
    //     cout << "No\n"; return;
    // }
    bool f = 1;
    for(int i = 0; i < s.size()-1; i++)
    {
        // if(s[i] == 'A' && s[i+1] == 'C')
        // {
        //     f = 0; break;
        // }
        if(s[i] > s[i+1])
        {
            f = 0; break;
        }
    }
    if(f) cout << "Yes\n";
    else cout << "No\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // int t; cin >> t;
    // while(t--)
    // {
       solve();
    // }
    return 0;
}