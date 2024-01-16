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
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        char r, c; cin >> c >> r;
        for(char x = '1'; x <= '8'; x++)
        {
            if(x == r) continue;
            cout << c << x << '\n';
        }
        for(char x = 'a'; x <= 'h'; x++)
        {
            if(x == c) continue;
            cout << x << r << '\n';
        }
    }
    
    return 0;
}