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
    vii v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    vii a;
    a.pb(v[0]);
    for(int i = 1; i < n; i++)
        if(v[i] != v[i-1]) a.pb(v[i]);
    vii diff;
    diff.pb(a[0]);
    for(int i = 0; i < (int)a.size()-1; i++)
        diff.pb(a[i+1]-a[i]);
    bool alice = true;
    for(int i = 0; i < (int)diff.size(); i++)
    {
        if(i == (int)diff.size()-1 || diff[i] > 1)
            break;
        alice = !alice;
    }
    if(alice) cout << "Alice\n";
    else cout << "Bob\n";
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