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
    char c; cin >> c;
    int cnt[26] = {0};
    n *= 2;
    vii a[26];
    while(n--)
    {
        char x, y; cin >> x >> y;
        cnt[y-'A']++;
        a[y-'A'].pb(x-'0');
    }
    int trum = cnt[c-'A'], odd = 0;
    for(int i = 0; i < 26; i++)
    {
        if(i == (c-'A') || cnt[i]%2 == 0) continue;
        odd++;
    }
    trum -= odd;
    if(trum < 0 || trum%2 == 1)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }
    for(int i = 0; i < 26; i++) sort(a[i].begin(), a[i].end());
    for(int i = 0; i < 26; i++)
    {
        if(i == (c-'A')) continue;
        int len = a[i].size();
        if(len%2) len -= 1;
        char x = 'A'+i;
        for(int j = 0; j < len; j+=2)
        {
            cout << a[i][j] << x << ' ' << a[i][j+1] << x << '\n';
        }
        if(a[i].size()%2)
        {
            cout << a[i][len] << x << ' ' << a[c - 'A'][a[c - 'A'].size() - 1] << c << '\n';
            a[c-'A'].pop_back();
        }
    }
    for(int j = 0; j < a[c-'A'].size(); j += 2)
    {
        cout << a[c - 'A'][j] << c << ' ' << a[c-'A'][j+1] << c << '\n';
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