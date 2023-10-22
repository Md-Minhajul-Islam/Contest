// Q: https://codeforces.com/contest/1883/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int cnt = 0, x = 1;
        for(int i = 0; i < 4; i++)
        {
            if(s[i]-'0' == x) cnt += 1;
            else if(s[i]-'0' == 0) cnt += abs(10-x)+1, x = 10;
            else cnt += abs(s[i]-'0'- x)+1, x = s[i]-'0';
        }
        cout << cnt << '\n';
    }
    return 0;
}