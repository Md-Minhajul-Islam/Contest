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
    int cnt = 1;
    for(int i = 0; i < (int)s.size() - 1; i++)
    {
        if(s[i] != s[i + 1]) cnt++;
    }
    if(cnt == 1) cout << cnt << "\n";
    else if(cnt == 2 && s[0] == '1') cout << cnt << "\n";
    else cout << cnt - 1 << "\n";
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