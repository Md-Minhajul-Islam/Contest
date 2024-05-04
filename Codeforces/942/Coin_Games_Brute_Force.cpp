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

string s; int n; 

void change(int i, int j)
{
    s[i] = (s[i]=='U')?'D':'U';
    s[j] = (s[j] == 'U')?'D':'U';
}
int isU(int i)
{
    return (s[i]=='U'); 
}
void solve()
{
    cin >> n >> s;
    bool alice = 0;
    while(n >= 3)
    {
        int mx = 0, ind = -1;
        for(int i = 0; i < n-2; i++)
        {
            int cnt = isU(i)+isU(i+1)+isU(i+2);
            if(cnt > mx && s[i+1] == 'U') 
            {
                mx = cnt;
                ind = i+1;
            }
        }
        int cnt = isU(0) + isU(1) + isU(n-1);
        if(cnt > mx && s[0] == 'U') mx = cnt, ind = 0;
        cnt = isU(n-1) + isU(n-2) + isU(0);
        if(cnt > mx && s[n-1] == 'U') mx = cnt, ind =  n-1;
        if(mx == 0) break;
        if(ind == 0)
        {
            change(n - 1, 1);
            s = s.substr(1, n);
        }
        else if(ind == n-1)
        {
            change(n - 2, 0);
            s = s.substr(0, n-1);
        }
        else 
        {
            change(ind - 1, ind+1);
            string x = s.substr(ind+1, n);
            s = s.substr(0, ind);
            s += x;
        }
        
        n--;
        alice = !alice;
    }
    if(n == 2)
    {
        if(s[0] == 'U' && s[1] == 'U')
        {
            alice = !alice;
            alice = !alice;
        }
        else if((s[0] == 'U' && s[1] == 'D') || (s[0] == 'D' && s[1] == 'U'))
        {
            alice = !alice;
        }
    }
    if(n == 1)
    {
        if(s[0] == 'U') alice = !alice;
    }
    if(alice) cout << "YES\n";
    else cout << "NO\n";
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