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

vector<bool> mark(1000005);
void marking()
{
    mark[0] = mark[1] = 1;
    for(int i = 2; i * i < 1000005; i++)
    {
        if(!mark[i])
        {
            for(int j = 2 * i; j < 1000005; j += i)
                mark[j] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    marking();
    int t; cin >> t;
    while(t--)
    {

        int h; cin >> h;
        int f = 0, p = 1;
        int cnt = 0;
        while(h)
        {
            if(p == h || !mark[h]) {
                cnt++;
                f = 1; break;
            }
            // cout << p << ' ' << h << '\n';
            if(p > h)break;
            h -= p;
            p *= 2;
            cnt++;
        }
        if(f) cout << cnt << '\n';
        else cout << -1 << '\n';
    }

    return 0;
}