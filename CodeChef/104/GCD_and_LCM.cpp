// Q: 
#include<bits/stdc++.h>
using namespace std;
// long long gcd(long long a, long long b)
// {
//     if(a == 0) return b;
//     return gcd(b%a, a);
// }
int main()
{
    // ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int x, y, k; cin >> x >> y >> k;
            while (k--)
            {
                if(x == y) break;
                if (x > y)
                    x = __gcd(x, y);
                else
                    y = __gcd(x, y);

                if (x > y)
                    x = (x * y) / __gcd(x, y);
                else
                    y = (x * y) / __gcd(x, y);
            }

            cout << x + y << '\n';
    }
    return 0;
}