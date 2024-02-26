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
 
bool cmp(pii a, pii b)
{
    return a.fi < b.fi;
}
void solve()
{
    int n; cin >> n; 
    pii a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].fi; a[i].se = i;
    }
    sort(a, a+n, cmp);
    ll pref[n];
    for(int i = 0; i < n; i++)
    {
        if(i == 0) pref[i] = a[i].fi;
        else pref[i] = pref[i-1]+a[i].fi;
    }
    int ans[n];
    int i = 0;
    while(i < n)
    {
        int j = 0;
        while(i+j+1 < n && pref[i+j] >= a[i+j+1].fi) j++;
        for(int k = i; k <= i+j; k++) ans[a[k].se] = i+j;
        i = i+j+1;
    } 
    for(int i = 0; i < n; i++) cout << ans[i] << ' ';
    cout << '\n';
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