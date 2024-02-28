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
    stack<pair<int, char>> st;
    for(int i = 0; i < n; i++)
    {
        if(st.empty() || st.top().se >= s[i]) st.push({i, s[i]});
        else
        {
            while(!st.empty() && st.top().se < s[i]) st.pop();
            st.push({i, s[i]});
        }
    }
    string s2; vii v;
    while(!st.empty())
    {
        s2 += st.top().se;
        v.pb(st.top().fi);
        st.pop();
    }
    sort(s2.begin(), s2.end()); sort(v.begin(), v.end());
    char x = s2[s2.size() - 1];
    int cnt = 0;
    for(int i = 0; i < s2.size(); i++)
        if(s2[i] != x) cnt++;
    int i = 0;
    for(auto x: v)
    {
        s[x] = s2[i];
        i++; 
    }
    if(is_sorted(s.begin(), s.end()))
        cout << cnt << "\n";
    else cout << -1 <<'\n';
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