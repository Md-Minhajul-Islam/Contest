#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n); sort(b, b + n);
        int sum = a[0] + b[n - 1];
        bool f = 1;
        for(int i = 0; i < n; i++)
        {
            if(sum != a[i] + b[n - 1 - i])
            {
                f = 0; break;
            }
        }
        if(f)
        {
            for(int i = 0; i < n; i++) cout << a[i] << ' ';
            cout << '\n';
            for(int i = n - 1; i >= 0; i--) cout << b[i] << ' ';
            cout << '\n';
        } else cout << -1 << '\n';
    }

}
