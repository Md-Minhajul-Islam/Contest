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
        int freq[n+1] = {0};
        for(int i = 1, u, v; i < n; i++)
        {
            cin >> u >> v;
            freq[u]++; freq[v]++;
        }
        int num_of_leaf = 0;
        for(int i = 1; i <= n; i++)
            if(freq[i] == 1) num_of_leaf++;
        cout << (num_of_leaf+1)/2 << '\n';;
    }
    return 0;
}