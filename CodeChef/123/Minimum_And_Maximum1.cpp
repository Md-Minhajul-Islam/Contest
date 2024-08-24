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
    int n, q; cin >> n >> q; ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    while(q--)
    {
        ll x; cin >> x;
        ll sum = 0;
        bool f = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == j) continue;
                sum = a[i];
                sum += a[j];
                ll sum2 = 0;
                for(int k = 0; k < n; k++)
                {
                    if(k == i || k == j) continue;
                    sum2 += a[k];
                }
                sum += 2*sum2;
                if(sum == x)
                {
                    cout << a[i] << ' ';
                    for(int k = 0; k < n; k++)
                    {
                        if(k == i || k == j) continue;
                        cout << a[k] << ' ';
                    }
                    cout << a[j] << '\n';
                    f = 1;
                    break;
                }
            }
            if(f) break;
        }
        if(f == 0) cout << -1 << '\n';
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