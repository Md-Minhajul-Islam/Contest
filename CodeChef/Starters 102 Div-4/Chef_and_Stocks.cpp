#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        int mini = 1000;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (mini > a[i])
                mini = a[i];
        }
        sum -= mini;
        cout << sum << "\n";
    }
    return 0;
}
