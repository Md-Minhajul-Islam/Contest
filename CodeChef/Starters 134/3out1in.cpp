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
    ll a[n+1], pref[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int k[q];
    for(int i = 0; i < q; i++) cin >> k[i];
    
    priority_queue<ll> mn;
    priority_queue<ll, vector<ll>, greater<ll>> mx;
    ll mx_sum = 0, mn_sum = 0;

    for(int i = 1; i <= n; i++)
    {
        if(mx.empty())
        {
            mx.push(a[i]);
            mx_sum += a[i];
        }    
        else if(a[i] > mx.top())
        {
            mn_sum += mx.top();
            mx_sum -= mx.top();
            mx_sum += a[i];
            mn.push(mx.top());
            mx.pop();
            mx.push(a[i]);
        }
        else
        {
            mn.push(a[i]);
            mn_sum += a[i];
        }
        if(mn.size() == mx.size())
        {
            mx_sum += mn.top();
            mn_sum -= mn.top();
            mx.push(mn.top());
            mn.pop();
        }
        if(i%2) pref[i] = mx_sum-mn_sum;
    }
    for(int i = 0; i < q; i++)
    {
        cout << pref[k[i]] << " \n"[i==q-1];
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