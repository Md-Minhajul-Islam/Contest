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
    int n, k; cin >> n >> k;
    int cnt[110];
    for(int i = 0; i < 110; i++) cnt[i] = 0;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        cnt[x]++;
    }
    sort(cnt, cnt+110, greater<>());
    for(int i = 0; i < 110; i++)
    {
        while(cnt[i] >= k)
        {
            cnt[i] = cnt[i]-k+k-1;
            if(cnt[i] < k)
            {
                for(int j = i+1; j < 110; j++)
                {
                    if(cnt[j] > 0)
                    {
                        cnt[j] += cnt[i];
                        cnt[i] = 0;
                        break;
                    }
                }
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < 110; i++) sum += cnt[i];
    cout << sum << '\n';
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