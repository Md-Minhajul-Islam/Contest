#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t; cin >> t;
    while(t--)
    {
        int x, n; cin >> x >> n;
        if(x * 100 >= n) cout << 0 << '\n';
        else
        {
            int ans = n - (x * 100);
            if(ans % 100 == 0) ans = ans / 100;
            else ans = ans / 100 + 1;
            cout << ans << '\n';
        }
    }
    return 0;
}
