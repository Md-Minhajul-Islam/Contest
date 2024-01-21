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
   int h, w, k; cin >> h >> w >> k;
   string s[h];
   for(int i = 0; i < h; i++) cin >> s[i];
   int mn = INT_MAX;
   if(k <= w)
   {
       for(int i = 0; i < h; i++)
       {
           int cnt = 0, dot = 0, null = 0;
           int j = 0;
           while(j < w)
           {
                if(j < k)
                {
                    if(s[i][j] == 'x') cnt++;
                    else if(s[i][j] == '.') dot++;
                    else null++;
                }
                else
                {
                    if(s[i][j-k] == 'x') cnt--;
                    else if(s[i][j-k] == '.') dot--;
                    else null--;

                    if(s[i][j] == 'x') cnt++;
                    else if(s[i][j] == '.') dot++;
                    else null++;
                }
                if(cnt == 0)
                {
                    if(null >= k) mn = 0;
                    else if(dot+null >= k) mn = min(mn, dot);
                }
                j++;
           }
       }
   }
   if(k <= h)
   {
        for(int i = 0; i < w; i++)
        {
            int cnt = 0, dot = 0, null = 0;
            int j = 0;
            while(j < h)
            {
                if(j < k)
                {
                    if(s[j][i] == 'x') cnt++;
                    else if(s[j][i] == '.') dot++;
                    else null++;
                } 
                else
                {
                    if(s[j-k][i] == 'x') cnt--;
                    else if(s[j-k][i] == '.') dot--;
                    else null--;

                    if(s[j][i] == 'x') cnt++;
                    else if(s[j][i] == '.') dot++;
                    else null++;
                }
                if(cnt == 0)
                {
                    if(null >= k) mn = 0;
                    else if(dot + null >= k) mn = min(mn, dot);
                }
                j++;
            }
        }
   }
   if(mn == INT_MAX) cout << -1 << '\n';
   else cout << mn << '\n';
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