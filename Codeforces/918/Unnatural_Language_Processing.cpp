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
    string a = "";
    n--;
    while(n > 0)
    {
        if(s[n] == 'a' || s[n] == 'e')
        {
            a += s[n]; a+= s[n-1]; 
            if(n - 2 > 0) a += '.';
            n -= 2;
        }
        else
        {
            a += s[n]; a += s[n-1]; a += s[n-2];
            if(n - 3 > 0) a += '.';
            n -= 3;
        }
    }
    
    reverse(a.begin(), a.end());
    cout << a << '\n';
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