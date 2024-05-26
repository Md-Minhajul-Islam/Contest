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

ll ar[33];
void precal()
{
    ar[0] = 1;
    for(int i = 1; i <= 31; i++) ar[i] = ar[i-1]*2;
}

void solve()
{
    ll x; cin >> x;
    ll ans[32];
    for(int i = 31; i >= 0; i--)
    {
        if(ar[i] > x) ans[i] = 0;
        else ans[i] = 1, x -= ar[i];
    }
    int i = 0;
    while(i <= 31)
    {
        if(ans[i] == 1)
        {
            int j = i;
            while(j+1 <= 31 && ans[j+1] == 1) j++;
            if(i != j)
            {
                ans[j+1] = 1, ans[i] = -1;
                for(int k = i+1; k <= j; k++) ans[k] = 0;
            }
            i = j+1;
        }
        else i++;
    }
    cout << 32 << "\n";
    for(int i = 0; i <= 31; i++) cout << ans[i] << " \n"[i==31];
}
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    precal();
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}