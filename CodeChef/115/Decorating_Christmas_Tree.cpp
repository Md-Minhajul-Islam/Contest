#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t; cin >> t;
    while(t--)
    {
        int n, x, y; cin >> n >> x >> y;
        y = (y / 3);
        int ans = min(x, y);
        x -= ans;
        x /= 2;
        ans += x;
        if(ans >= n) cout << "YES\n";
        else cout << "NO\n";
    }

}
