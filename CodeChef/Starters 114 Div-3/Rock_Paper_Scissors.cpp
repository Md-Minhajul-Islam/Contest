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
    string st; cin >> st;
    int r = 0, p = 0, s = 0;
    string chef = "";
    for(int i = 0; i < n; i++)
    {
        if(st[i] == 'R') r++;
        // else if(st[i] == 'P') p++;
        // else s++;
        chef += 'P';
    }
    // cout << chef << '\n';
    int x;
    if(n%2 == 0) x = (n/2)+1;
    else x = (n+1)/2;
    if(r >= x) cout << chef << '\n';
    else 
    {
        x -= r;
        // cout << x << '\n';
        for(int i = n-1; i >= 0; i--)
        {
            if(x <= 0) break;

            else if(st[i] == 'P') chef[i] = 'S', x--;
            else if(st[i] == 'S') chef[i] = 'R', x--;

        }
        cout << chef << '\n';
    }

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