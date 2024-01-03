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
bool check(int n)
{
    if(n < 0) return 0;
    if(n == 0 || n%3 == 0 || n%4 == 0 || n%7 == 0) return 1;
    return (check(n-3) || check(n-4));
}
void solve()
{
    int n; cin >> n;
    if(check(n)) cout << "YES\n";
    else cout << "NO\n";
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