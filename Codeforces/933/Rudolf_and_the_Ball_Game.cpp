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
    int n, m, x; cin >> n >> m >> x;
    set<int> s; s.insert(x);
    while(m--)
    {
        int r; char ch; cin >> r >> ch;
        set<int> ss;
        for(auto p : s)
        {
            int q;
            if(ch == '0') q = (p + r) % n;
            else if(ch == '1') q = (n+p-r)%n;
            else if(ch == '?')
            {
                q = (p + r) % n;
                if(q == 0) q = n;
                ss.insert(q);
                q = (n+p-r) % n;
            }
            if(q == 0) q = n;
            ss.insert(q);
        }
        s.clear();
        s = ss;
    }
    cout << s.size() << '\n';
    for(auto p: s) cout << p << ' ';
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