#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        int c = a, d = b;
        int ans1 = 0, f1 = 0;
        while(b > 0)
        {
            if(a % b == 0) { f1 = 1; break; }
            a += 1; b -= 1;
            ans1++;
        }
        int ans2 = 0, f2 = 0;
        while(c > 0)
        {
            if(c % d == 0) { f2 = 1; break; }
            c -= 1; d += 1;
            ans2++;
        }
        int t1 = INT_MAX, t2 = INT_MAX;
        if(f1) t1 = ans1;
        if(f2) t2 = ans2;
        // cout << ans1 << ' ' << ans2 <<'\n';
        cout << min(t1, t2) << '\n';

    }
    return 0;
}
