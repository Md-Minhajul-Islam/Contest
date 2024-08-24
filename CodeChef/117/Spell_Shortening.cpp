#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int f = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(s[i] > s[i + 1])
            {
                f = 1;
                s.erase(i, 1);
                break;
            }
        }
        if(f == 0)
        {
            s.erase(n - 1, 1);
        }
        cout << s << '\n';
    }

}
