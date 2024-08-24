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
    int v[n+1];
    if(n%3 != 2)
    {
        for(int i = 1; i < n; i+=3)
        {
            v[i] = i, v[i+1] = i+2, v[i+2] = i+1;
        }
        if(n%3) v[n] = n;
    }
    else
    {
        v[1] = 5, v[5] = 1, v[2] = 3, v[3] = 2, v[4] = 4;
        for(int i = 6; i <= n; i += 3)
        {
            v[i] = i+2, v[i+2] = i, v[i+1] = i+1;
        } 
    }
    for(int i = 1; i <= n; i++) cout << v[i] <<' ';
    cout <<'\n';
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