#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x;
        cin >> x;
        x *= .2;
        cout << ceil(100.0 / x) << "\n";
    }
    return 0;
}