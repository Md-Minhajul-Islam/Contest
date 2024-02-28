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
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int cnt[26] = {0};
        for(int i = 0; i < n; i++)
        {
            cnt[s[i]-'a']++;
        }
        sort(cnt, cnt+26);
        int i = 24;
        while(cnt[25] > 0 && i >= 0)
        {
            cnt[25] -= cnt[i];
            i--;
        }
        if(cnt[25] > 0) cout << cnt[25] << '\n';
        else if(n%2) cout << 1 << "\n";
        else cout << 0 << '\n';
    }
    
    return 0;
}