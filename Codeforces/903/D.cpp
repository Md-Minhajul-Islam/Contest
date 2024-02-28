// Q: https://codeforces.com/problemset/problem/1881/D
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n], mx = 0;
        for(int i = 0; i < n; i++) cin >> a[i], mx = max(a[i], mx);
        int l = 0, r = mx, f = 0;
        while(l <= r)
        {
            int m = l + (r - l) / 2;
            double temp = 1.0;
            for(int i = 0; i < n; i++) temp *= (double)a[i] / (double)m;
            if(fabs(1.0 - temp) < 1e-15)
            {
                f = 1; break;
            } else if(temp > 1) l = m + 1;
            else r = m - 1;
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
