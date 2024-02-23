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
    int n; cin >>n;
    string s; cin >> s;
    int pref[n];
    pref[0] = s[0]-'0';
    for(int i = 1; i < n; i++) pref[i] = pref[i-1]+(s[i]-'0');
    vii v;
    int carry = 0, curr = n-1;
    while(true)
    {
        if(carry == 0 && curr < 0) break;
        int sum = carry;
        if(curr >= 0) sum += pref[curr];
        v.pb(sum%10);
        carry = sum/10;
        curr--;
    }
    while(v.back() == 0) v.pop_back();
    reverse(v.begin(), v.end());
    for(auto &x: v) cout << x;
    cout << '\n';
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