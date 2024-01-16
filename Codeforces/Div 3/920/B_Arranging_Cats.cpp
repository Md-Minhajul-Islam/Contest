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
    string s,t; cin >> s >> t;
    int cn1 = 0, flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1' && t[i] == '0') cn1++, flag++;
    }
    for(int i = 0; i < n; i++)
    {
        if(t[i] == '1' && s[i] == '0')
        {
            if(flag) flag--;
            else cn1++;
        }
    }

    cout << cn1 << '\n';
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