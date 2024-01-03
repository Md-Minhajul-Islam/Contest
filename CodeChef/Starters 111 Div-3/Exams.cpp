#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t; cin >> t;
    while(t--)
    {
        double x, y, z; cin >> x >> y >> z;
        double tot = x * y;
        double a = tot * (0.5);
        if(z > a) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
