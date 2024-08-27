#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string  s;
        cin >> s;
        bool NotPossible = false;
        
        if((s.size() == 2) && (s[0] =='(' && s[1] == ')')) NotPossible = true;; 
        
        if(NotPossible) cout << "NO\n";
        else 
        {
            cout << "YES\n";
            bool flag = 0;
            for(int i = 0; i < s.size()-1; i++)
            {
                if((s[i] == '(' && s[i+1] == '(') || (s[i] == ')' && s[i+1] == ')')) flag = 1;
            }
            if(flag)
                for(int i = 0; i < s.size(); i++) cout << "()";
            else
            {
                for(int i = 0; i < s.size(); i++) cout << '(';
                for(int i = 0; i < s.size(); i++) cout << ')';
            }
            cout << "\n";
        } 
    }
    return 0;
}