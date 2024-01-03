#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        int x, y; cin >> x >> y;
        int ans = x + y;
        ans += (max(x, y) - 1) - min(x, y);
        cout << ans << '\n';
    }
    return 0;
}
