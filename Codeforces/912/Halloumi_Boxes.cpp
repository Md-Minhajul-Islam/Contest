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
    
    int t; cin >> t; 
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n]; 
        for(int i = 0; i < n; i++) cin >> a[i];
        bool f = 1;
        if(k == 1)
        {
            for(int i = 0; i < n-1; i++)
            {
                if(a[i] > a[i+1]){f = 0; break;}
            }
        }
        if(f) cout <<"YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}