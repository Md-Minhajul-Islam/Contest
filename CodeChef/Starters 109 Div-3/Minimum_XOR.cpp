#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n];
        int ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans ^= a[i];
        }
        int temp = ans;
        for(int i = 0; i < n; i++)
        {
            temp = min(temp, ans^a[i]);
        }

        cout << temp << '\n';
    }
    return 0;
}
