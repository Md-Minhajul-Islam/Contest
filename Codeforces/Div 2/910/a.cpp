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
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int cnt = 0;
        for(int  i = 0; i < n; i++) if(s[i] == 'B') cnt++;
        if(cnt == k) cout << 0;
        else if(cnt < k)
        {
            int f = 0;
            cout << 1 << '\n';
            for(int i = 0; i < n; i++)
            {

                if(s[i] != 'B') cnt++;
                if(cnt == k)
                {
                    f = i+1; break;
                }
            }
            cout << f << ' ' << 'B';
        }
        else 
        {
            int f = 0;
            cout << 1 << '\n';
            for(int i = 0; i < n; i++)
            {
  
                if(s[i] != 'A') cnt--;
                if(cnt == k)
                {
                    f = i+1; break;
                }
            }
            cout << f << ' ' << 'A';
        }
        cout << '\n';
    }
    
    return 0;
}