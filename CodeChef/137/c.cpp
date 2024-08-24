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
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int i = 0, cnt = 0;
    while(i+1 < n)
    {
        if(a[i+1]-a[i] <= b[i]) i++;
        else if(cnt == 0) cnt++, i++;
        else break;
    }
    if(i == n-1)
    {
        cout << "YES\n";
        return;
    }
    i = n-1, cnt = 0;
    while(i-1 >= 0)
    {
        if(a[i]-a[i-1] <= b[i]) i--;
        else if(cnt == 0) cnt++, i--;
        else break;
    }
    if(i == 0)
    {
        cout << "YES\n";
        return;
    }
    i = 0; int j = n-1;
    while(i < j)
    {
        if(a[i+1]-a[i] <= b[i]) i++;
        else if(a[j]-a[j-1] <= b[j]) j--;
        else break;
    }
    if(i == j) 
    {
        cout << "YES\n";
        return;
    }
    int from_left[n], from_right[n];
    for(int i = 0; i < n; i++) from_left[i] = from_right[i] = 0;
    from_left[0] = from_right[n-1] = 1;
    // for(int i = 1, j = n-2; i < n; i++, j--)
    // {
    //     if(a[i]-a[i-1] <= b[i-1]) from_left[i] = from_left[i-1]+1;
    //     if(a[j+1]-a[j] <= b[j+1]) from_right[j] = from_right[j+1]+1;
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     cout << from_left[i] << " \n"[i+1 == n];
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     cout << from_right[i] << " \n"[i + 1 == n];
    // }

    // for(int i = 0; i < n; i++)
    // {
    //     if(from_left[i]+from_right[i] == n)
    //     {
    //         cout << "YES\n";
    //         return;
    //     }
    // }
    // cout << "NO\n";
    // return;
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