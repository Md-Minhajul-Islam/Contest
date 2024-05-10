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
    string s; cin >> s;
    int n = (int)s.size();
    if(n == 0)
    {
        cout << "NO\n";
        return;
    }
    int cnt = count(s.begin(), s.end(), s[0]);
    if(cnt == n)
    {
        cout << "NO\n";
        return;
    }
    bool f = 1;
    char c;
    for(int i = 1; i < n; i++)
    {
        if(s[0] != s[i])
        {
            c = s[i];
            break;
        }
    }
    cout << "YES\n";
    cout << c;
    for(int i = 0; i < n; i++)
    {
        if(c == s[i] && f)
        {
            f = 0; continue;
        }
        cout << s[i];
    }
    cout << '\n';

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