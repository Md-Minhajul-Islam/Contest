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
    int n, q; cin >> n >> q;
    string s; cin >> s;
    priority_queue<int, vector<int>> pq;
    vii cnt(n+q+5, 1);
    pq.push(1);
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1]) cnt[i] = cnt[i-1]+1;
        pq.push(cnt[i]);
    }
    cout << pq.top() << ' ';
    int ind = n;
    while(q--)
    {
        char ch; cin >> ch;
        s += ch;
        if(s[ind] == s[ind-1]) cnt[ind] = cnt[ind-1]+1;
        pq.push(cnt[ind]);
        cout << pq.top() << ' ';
        ind++;
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