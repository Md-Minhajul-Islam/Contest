// Q: 
#include<bits/stdc++.h>
using namespace std;
bool check(string x, string s)
{
    for(int i = 0; i < x.size(); i++)
    {
        int j = 0;
        while(i+j < x.size() && j < s.size() && x[i+j] == s[j]) j++;
        if(s.size() == j) return 1;
    }
    return 0;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        string x, s; cin >> x >> s;
        int cnt  = 0;
        bool flag = 0;
        do
        {
            bool f = check(x, s); 
            if(f == 0)
            {
                cnt++; x += x;
            }
            else
            {
                flag = 1; break;
            }
        }while(x.size() < 150);
        if(flag) cout << cnt <<"\n";
        else cout << -1 <<"\n";
    }
    return 0;
}