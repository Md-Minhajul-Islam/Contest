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
ll a[200009];
ll sum(ll i)
{
    ll s = 0;
    while(i)
    {
        s += i%10;
        i /= 10;
    }
    return s;
}

void precal()
{
    for(ll i = 0; i < 200008; i++)
    {
        a[i] = sum(i);
    }
    for(ll i = 1; i < 200008; i++)
        a[i] += a[i-1];
}
void solve()
{
    ll n; cin >> n;
    cout << a[n] << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precal();
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}