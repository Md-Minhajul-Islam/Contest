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
    int n, m; 
    cin >> n >> m; ll a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+m);
    ll tot = 0ll;
    int l = 0, r = m-1;
    int l1 = 0, r1 = n-1;

    while(l1 <= r1)
    {
        if(max(abs(a[l1]-b[l]), abs(a[l1]-b[r])) > max(abs(a[r1]-b[l]), abs(a[r1]-b[r])))
        {
            if(abs(a[l1]-b[l]) > abs(a[l1]-b[r]))
                tot += abs(a[l1]-b[l]), l++;
            else 
                tot += abs(a[l1]-b[r]), r--;
            l1++;
        }
        else
        {
            if(abs(a[r1]-b[l]) > abs(a[r1]-b[r]))
                tot += abs(a[r1]-b[l]), l++;
            else
                tot += abs(a[r1]-b[r]), r--;
            r1--;
        }
    }
    cout << tot << '\n';
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