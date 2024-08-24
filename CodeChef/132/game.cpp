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
    int n, m; cin >> n >> m;
    ll bat[n], ball[m];
    for(int i = 0; i < n; i++) cin >> bat[i];
    for(int i = 0; i < m; i++) cin >> ball[i];
    if(n < 4 || m < 4 || n+m < 11)
    {
        cout << -1 << '\n';
        return;
    }
    sort(bat, bat+n, greater<>()); sort(ball, ball+m, greater<>());
    ll sum = 0;
    for(int i = 0; i < 4; i++) sum += bat[i]+ball[i];
    int take = 8, i = 4, j = 4;
    while(take < 11)
    {
        if(i < n && j < m)
        {
            if(bat[i] > ball[j])
            {
                sum += bat[i];
                i++;
            }
            else sum += ball[j], j++;
        }
        else if(i < n) sum += bat[i], i++;
        else if(j < m) sum += ball[j], j++;
        take++;
    }
    cout << sum <<  '\n';
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