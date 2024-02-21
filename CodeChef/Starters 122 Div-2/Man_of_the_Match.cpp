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
    ll mx = -1, ind = -1;
    for(int i = 1; i <= 22; i++)
    {
        ll x, y; cin >> x >> y;
        if(mx < (x * 1) + (y * 20))
        {
            mx = x + (y * 20);
            ind = i;
        }
    }
    cout << ind << '\n';
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