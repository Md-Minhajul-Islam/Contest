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
        int x, y, z; cin >> x >> y >> z;
        int min1 = x*y;
        int min2 = z*24*60;
        if(min1 <= min2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}