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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    int t; cin >> t; 
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;  
        int a1 = 0, b1 = 0, c1 = 0;

        if(b%2 == c%2) a1 = 1;
        if(a%2 == c%2) b1 = 1;
        if(a%2 == b%2) c1 = 1;
        cout << a1 << ' ' << b1 << ' ' << c1 << '\n';
    }
    
    return 0;
}