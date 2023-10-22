// Q: https://codeforces.com/contest/1883/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        unordered_map<char, int> mp;
        for(int i = 0; i < n; i++)
        {
            char c; cin >> c; mp[c]++;
        }
        k += 1;
        bool flag = 1;
        for(auto m: mp)
        {
            if(m.second%2 == 1 && k == 0)
            {
                flag = 0; break;
            }
            if(m.second%2 == 1) k--;
        }
        if(flag) cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}