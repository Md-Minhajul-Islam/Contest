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
    string s; cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A') cnt1++;
        else if(s[i] == 'B') cnt2++;
    }
    if(cnt1 > cnt2) cout << "A\n";
    else cout << "B\n";
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