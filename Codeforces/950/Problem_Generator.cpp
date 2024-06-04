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
    int n, m; cin >> n >> m;
    string s; cin >> s;
    int cnt[30];
    memset(cnt, 0, sizeof(cnt));
    for(int i = 0; i < n; i++)
    {
        cnt[s[i]-'A']++;
    }
    int ans = 0;
    for(int i = 0; i <= 6; i++)
    {
        ans += max(0, m-cnt[i]);
    }
    cout << ans << "\n";
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