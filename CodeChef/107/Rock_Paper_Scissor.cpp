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
        int n; cin >> n;
        string a, b; cin >> a >> b;
        int chef = 0, chefina = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == b[i]) continue;
            if((a[i] == 'R' && b[i] == 'S') || (a[i] == 'P' && b[i] == 'R') || (a[i] == 'S' && b[i] == 'P'))
                chef++;
            else chefina++;
        }
        if(chef > chefina) cout << 0 <<'\n';
        else
        {
            int ans = (chefina - chef)/2 + 1;
            cout << ans << '\n';
        } 
    }
    return 0;
}