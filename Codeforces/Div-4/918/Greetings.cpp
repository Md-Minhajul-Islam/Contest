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

ll mergesort(int l, int r, vll& v, vll& temp)
{
    if(l >= r) return 0;
    ll cntInv = 0;
    int mid = l + (r - l) / 2;
    cntInv += mergesort(l, mid, v, temp);
    cntInv += mergesort(mid + 1, r, v, temp);

    ll swaps = 0ll;
    for(int i = l, j = mid + 1, k = l; k <= r; k++)
    {
        if(i == mid + 1) temp[k] = v[j++];
        else if(j == r + 1) temp[k] = v[i++];
        else if(v[i] <= v[j]) temp[k] = v[i++];
        else
        {
            temp[k] = v[j++];
            swaps += (mid + 1) - (i);
        }
    }
    for(int k = l; k <= r; k++) v[k] = temp[k];
    cntInv += swaps;
    return cntInv;
}

void solve()
{
    int n; cin >> n;
    vector<pii> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].fi >> v[i].se;
    sort(v.begin(), v.end());
    vector<ll> v2;
    for(auto& x : v)
    {
        v2.pb(x.se);
    }
    vll temp(n + 9);
    ll cntInv = mergesort(0, n - 1, v2, temp);
    cout << cntInv << '\n';
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