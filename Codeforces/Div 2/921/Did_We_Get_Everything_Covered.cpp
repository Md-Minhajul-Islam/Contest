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
    int n, k, m; cin >> n >> k >> m;
    string s; cin >> s;
    set<char> st;
    vector<char> v;
    for(int i = 0; i < m; i++)
    {
        st.insert(s[i]);
        if(st.size() == k)
        {
            v.pb(s[i]);
            st.clear();
        }
    }
    if(v.size() >= n) cout << "YES\n";
    else
    {
        cout << "NO\n";
        char miss;
        for(int i = 0; i < k; i++)
        {
            char x = (char)('a'+i);
            if(st.count(x) == 0) miss = x;
        }
        while(v.size() < n) v.pb(miss);
        for(auto x: v) cout << x;
        cout << '\n';
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