#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        double l, p; cin >> p >> l;
        double b = p* 0.75;
        if(l >= b) cout << "YES\n";
        else cout << "NO\n";
    }

}
