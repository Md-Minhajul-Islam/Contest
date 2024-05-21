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
 
string alp = "abcdefghijklmnopqrstuvwxyz";
void solve()
{
    int n; cin >> n;
    string b; cin >> b;
    set<char> st;
    for(auto x: b) st.insert(x);
    vii v;
    for(auto ch: st) v.pb(ch);
    map<char, char> m;
    int sz = v.size();
    for(int i = 0; i < sz; i++) m[v[i]] = v[sz-i-1];
    for(int i = 0; i < n; i++) cout << m[b[i]];
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