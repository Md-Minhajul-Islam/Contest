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
 
int trailing_zero(int x)
{
    int cnt = 0;
    while(x%10 == 0) cnt++, x /= 10;
    return cnt;
}
bool cmp(pii a, pii b)
{
    return a.se > b.se;
}
int cancel_zero(int x)
{
    while(x%10 == 0) x /= 10;
    return x;
}
int digit_count(int x)
{
    int cnt = 0;
    while(x) cnt++, x /= 10;
    return cnt;
}
void solve()
{
    int n, m; cin >> n >> m; pii a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].fi;
        a[i].se = trailing_zero(a[i].fi);
    }
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i+=2)
        a[i].fi = cancel_zero(a[i].fi);
    int total_digit = 0;
    for(int i = 0; i < n; i++)
        total_digit += digit_count(a[i].fi);
    if(total_digit >= m+1) cout << "Sasha\n";
    else cout << "Anna\n";
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