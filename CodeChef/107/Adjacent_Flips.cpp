// Q: 
#include<bits/stdc++.h>
using namespace std;

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
        stack<char> stk;
        for(int i = 0; i < s.size(); i++)
        {
            if(!stk.empty() && stk.top() == s[i]) stk.pop();
            else stk.push(s[i]);
        }
        if(stk.empty() || stk.size() == 1) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}