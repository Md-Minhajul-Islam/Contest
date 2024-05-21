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
    int N; cin >> N;
    string s; cin >> s;
    int x = 0, y = 0;
    for(int i = 0; i < N; i++)
    {
        if(s[i] == 'N')x++;
        if(s[i]=='S') x--;
        if(s[i] == 'E') y++;
        if(s[i] == 'W') y--;
    }
    if(N == 2 && x == 0 && y == 0) cout << "NO\n";
    else if(abs(x)%2 || abs(y)%2) cout << "NO\n";
    else
    {
        int n = 0, ss = 0, w = 1, e = 1;
        char a[2] = {'H', 'R'};
        string ans = "";
        for(int i = 0; i < N; i++)
        {
            if(s[i] == 'N') ans += a[n], n = !n;
            if(s[i] == 'S') ans += a[ss], ss = !ss;
            if(s[i] == 'E') ans += a[e], e = !e;
            if(s[i] == 'W') ans += a[w], w = !w;
        }
        cout << ans << '\n';
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