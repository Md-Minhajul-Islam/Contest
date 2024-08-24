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
    string c;
    for(int i = 0; i < n; i++)
        {
            if(s[i] == 'R') c += 'P';
            else if(s[i] == 'P') c += 'S';
            else c += 'R';
        }
    
    int i = 0;
    int ans = 0;
    while(i < n)
    {
        int cnt = 1;
        while(i+1 < n && c[i] == c[i+1]) i++, cnt++;
        i++;
        ans += (cnt+1)/2;
    }   
    cout << ans << '\n';
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