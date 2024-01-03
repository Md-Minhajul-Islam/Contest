// Q: https://www.codechef.com/START105C/problems/CHEAT
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int ans = 0;
        for (int i = 2; i <= n; i += 7) ans += 1;
        cout << ans << '\n';
    }
    return 0;
}
