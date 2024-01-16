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

int a[200009];

void solve()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    int op1 = 1e6,op2 = 1e6;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= op1 && a[i] <= op2)
        {
            (op1<op2)? op1 = a[i] : op2 = a[i];
        }
        else if(a[i] <= op1) op1 = a[i];
        else if(a[i] <= op2) op2 = a[i];
        else
        {
            (op1<op2)? op1 = a[i]: op2 = a[i];
            ans++;
        }
    }
    cout << ans << '\n';    
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