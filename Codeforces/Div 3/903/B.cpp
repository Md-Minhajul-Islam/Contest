// Q: https://codeforces.com/contest/1881/problem/B
#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if(a == 0) return b;
    return GCD(b%a, a);
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        bool flag = 0;
        int gcd = GCD(a, b);
        gcd = GCD(gcd, c);
        for(int i = 0; i < 3; i++)
        {   
            // cout << gcd <<"\n";
            if(a > b && a > c) a -= gcd;
            else if(b > c) b -= gcd;
            else if(c > gcd) c -= gcd;
            // cout << a << " " << b <<" " << c <<"\n";
            if (a == b && b == c && c == gcd)
            {
                flag = 1;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout <<"NO\n";
    }
    return 0;
}