#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        int h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;
        int mn1 = (h+x-1)/x;
        int tem = (h+y1-1)/y1;
        if(tem <= k)
        {
            cout << min(mn1, tem) << '\n';
        } else
        {
            tem = k;
            h -= y1*k;
            tem = k+(h+y2-1)/y2;
            cout << min(mn1, tem) << '\n';
        }
    }
}
