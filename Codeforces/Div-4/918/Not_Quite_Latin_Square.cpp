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
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) 
        {
            char x; cin >> x; 
            if(x == 'A') a++;
            else if(x == 'B') b++;
            else if(x == 'C') c++;
        }
    if(a < 3) cout << "A\n";
    else if(b < 3) cout << "B\n";
    else cout << "C\n";
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