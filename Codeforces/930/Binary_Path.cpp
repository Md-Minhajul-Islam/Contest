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
    string s1, s2; cin >> s1 >> s2;
    bool f = 0;
    string t;
    t += s1[0];
    int i = 0, ways = 1;
    while(true)
    {
        if(f == 0)
        {
            if(i+1 < n && s1[i+1] < s2[i])
            {
                t += s1[i+1];
                ways = 1;
                i++;
            }
            else if(i+1 < n && s1[i+1] > s2[i])
            {
                t += s2[i];
                i++;
                f = 1;
            }
            else if(i+1 < n && s1[i+1] == s2[i])
            {
                t += s1[i+1];
                ways++;
                i++;
            }
            else 
            {
                t += s2[i];
                break;
            }
        }
        else
        {
            if(i == n) break;
            t += s2[i];
            i++;
        }
    }
    cout << t << '\n';
    cout << ways <<'\n';
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