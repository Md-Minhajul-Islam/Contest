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
    int n; cin >> n; ll a[n];
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll tgt = sum/n;
    // int f = 1;
    ll rem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == tgt) continue;
        else if(a[i] > tgt) rem += a[i]-tgt, a[i] = tgt;
        else
        {
            if(a[i]+rem < tgt)
            {
                cout << "NO\n";
                return;
            }
            rem -= tgt-a[i];
            a[i] =  tgt;
        }
    }
    if(rem == 0) cout << "YES\n";
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