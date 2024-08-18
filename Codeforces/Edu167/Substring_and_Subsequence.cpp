#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve()
{

	string a, b;
    cin >> a >> b;

    int n = a.size(), m = b.size();
    int mx = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int cnt = 0;
            if(b[i] == a[j])
            {
                for(int p = i, q = j; p < m && q < n; q++)
                {
                    if(b[p] == a[q]) p++, cnt++;
                }
            }
            mx = max(cnt, mx);
        }
    }
    cout << n+m-mx << "\n" ; 
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