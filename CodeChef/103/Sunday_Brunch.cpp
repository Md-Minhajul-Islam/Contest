// Q: 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x, y; cin >> x >>  y;
        int a = x/y;
        if(a < 20) cout << a << "\n";
        else cout << 20 <<"\n";
    }
    return 0;
}