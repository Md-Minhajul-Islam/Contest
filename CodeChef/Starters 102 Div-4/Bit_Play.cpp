#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int m = 1e9 + 7;
int dp[N];
int fun(int i, int n, bool arr[])
{
    if(i > n) return 1;
    if(dp[i] != -1) return dp[i];
    int ans = 0;
    if(!((arr[i-2] & arr[i-1]) ^ arr[i]))
        ans = (ans + fun(i+2, n, arr)) % m;
    if(!((arr[i-2] | arr[i-1]) ^ arr[i]))
        ans = (ans + fun(i+2, n, arr)) % m;
    if(!((arr[i-2] ^ arr[i-1]) ^ arr[i]))
        ans = (ans + fun(i+2, n, arr)) % m;
    return dp[i] = ans % m;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        int n; cin >> n;
        bool arr[n];
        for (int i = 0; i < n; i++)
        {
            char x; cin >> x;
            if (x == '0') arr[i] = 0;
            else arr[i] = 1;
        }
        cout << fun(2, n-1, arr) << "\n";
    }
    return 0;
}
