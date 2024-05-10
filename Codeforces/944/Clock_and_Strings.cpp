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
    int a, b, c, d; cin >> a >> b >> c >> d;
    if(a > b) swap(a, b);
    if(c > d) swap(c, d);
    int cnt = 0;
    for(int i = a + 1; i < b; i++)
    {
        if(i == c || i == d) cnt++;
    }
    if(cnt == 1)
    {
        cout << "YES\n";
    } else cout << "NO\n";

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