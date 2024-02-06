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
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int cnt[26] = {0};
    string s;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(a[i] == cnt[j])
            {
                char c = 'a'+j;
                s += c;
                cnt[j]++;
                break;
            }
        }
    }
    cout << s << '\n';
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