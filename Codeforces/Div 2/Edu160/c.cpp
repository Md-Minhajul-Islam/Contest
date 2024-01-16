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
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vll preCal(30); preCal[0] = 1;
    for(ll i = 1; i < 30; i++) preCal[i] = preCal[i-1]*2;
    vll cnt(30, 0);

    ll m; cin >> m;
    while(m--)
    {
        ll t, v;
        cin >> t >> v;
        if(t == 1) cnt[v]++;
        else
        {
            ll indx = 29;
            while(indx >= 0 && v > 0)
            {
                ll value = cnt[indx];
                while(preCal[indx] <= v && value)
                {
                    v -= preCal[indx];
                    value--;
                    // cout << v <<'-'<<preCal[indx] << '\n';
                }
                indx--;
            }
            if(v == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}