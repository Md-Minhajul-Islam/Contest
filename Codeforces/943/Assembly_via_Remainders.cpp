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
    int a[n];
    for(int i = 0; i < n - 1; i++) cin >> a[i];
    vii v(n); v[n - 1] = 1e9;
    for(int i = n - 2; i >= 0; i--)
    {
        v[i] = v[i + 1] - a[i];
    }
    for(int i = 0; i < n; i++) cout << v[i] << ' ';
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