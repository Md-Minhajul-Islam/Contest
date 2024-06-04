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
 
bool check(int ind, vii &v)
{
    vii v2; 
    for(int i = 0; i < v.size(); i++)
        if(i != ind) v2.pb(v[i]);
    vii gcd;
    for(int i = 0; i < v2.size()-1; i++)
    {
        gcd.pb(__gcd(v2[i], v2[i+1]));
    }
    return (is_sorted(gcd.begin(), gcd.end()));
}


void solve()
{
    int n; cin >> n;
    vii v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vii gcd;
    for(int i = 0; i < n-1; i++) gcd.pb(__gcd(v[i], v[i+1]));
    if(is_sorted(gcd.begin(), gcd.end()))
    {
        cout << "YES\n";
        return;
    }
    int ind = 0;
    for(int i = 0; i < n-2; i++)
        if(gcd[i] > gcd[i+1])
        {
            ind = i; break;
        }
    if(check(ind, v))
    {
        cout << "YES\n";
        return;
    }
    if(check(ind+1, v))
    {
        cout << "YES\n";
        return;
    }
    if(check(ind+2, v))
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n"; 
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