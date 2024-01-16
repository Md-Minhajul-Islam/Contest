// Q: https://codeforces.com/contest/1891/problem/0
#include<bits/stdc++.h>
using namespace std;
bool isValid(int n)
{
    for(int i = 1; i <= n; i*=2)
    {
        if(i == n) return 1;
    }
    return 0;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n+1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        int f = 1;
        for(int i = n-1; i >= 1; i--)
        {
            if(a[i] <= a[i+1]) continue;
            if(isValid(i)) continue;
            else f = 0;
        }
        if(f) cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}