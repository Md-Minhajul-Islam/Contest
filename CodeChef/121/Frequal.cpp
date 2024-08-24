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

vii prime;

void precal()
{
    bool mark[1000005] = {0};
    int lim = sqrt(1000005*1.0)+2;
    for(int i = 2; i < 1000005; i++)
    {
        if(mark[i]) continue;
        prime.pb(i);
        if(i > lim) continue;
        for(int j = i*i; j < 1000005; j+=i) mark[j] = 1; 
    }
}
void solve()
{
    int n; cin >> n;
    if(n%2 == 1)
    {
        cout << 1 << ' ';
        n -= 1;
    }
    for(auto &v: prime)
    {
        if(n == 0) break;
        cout << v << ' ' << v << ' ';
        n -= 2;
    }
    cout << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    precal();
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}