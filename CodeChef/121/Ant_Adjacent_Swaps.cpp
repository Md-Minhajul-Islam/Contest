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

int m[26][26];

void precal()
{
    memset(m, -1, sizeof(m));
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            int cnt = 0, it = i;
            while(it%26 != j)
            {
                it += 3;
                cnt += 1;
            }
            m[i][j] = cnt;
        }
    }
}

void solve()
{
    int n; cin >> n;
    string a, b; cin >> a >> b;
    for(int i = 0; i < n; i++)
    {
        cout << m[a[i]-'A'][b[i]-'A'] << ' ';
    }
    cout << '\n';
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