#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    
int t; cin >> t;
while(t--)
{
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll sum = 0;
    for(int i =0; i < n-1; i++)
    {
        if(-a[i]-a[i+1] > a[i]+a[i+1]) 
        a[i] *= -1, a[i+1] *= -1;
        
        sum += a[i];
    }
    sum += a[n-1];
    cout << sum << '\n';
}
return 0;
}