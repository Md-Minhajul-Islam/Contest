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
    string s = "*abcdefghijklmnopqrstuvwxyz";
    int n; cin >> n;
    for(int i = 1; i <= 26; i++)
    {
        for(int j = 1; j <= 26; j++)
        {
            for(int k = 1; k <= 26; k++)
            {
                if(i+j+k == n)
                {
                    cout << s[i] << s[j] << s[k] << '\n';
                    return;
                }
            }
        }
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