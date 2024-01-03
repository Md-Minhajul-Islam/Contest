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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        // priority_queue<int> pq;
        set<int> s;
        vii v;
        int mx = -1;
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        for(int i = 0; i < n; i++)
        {
            if(s.find(a[i]) == s.end())
            {
                s.insert(a[i]);
                v.pb(a[i]);
            } else v.pb(mx);
        }
        for(int i = 0; i < n; i++)
            cout << v[i] << ' ';
        cout << '\n';
    }


    return 0;
}