// Q: 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x; sum += x; 
        }
        if(sum/n < 1) cout <<"NO\n";
        else
        {
            if(sum%n == 0) cout <<"YES\n";
            else
            {
                if(k == 0) cout << "NO\n";
                else cout <<"YES\n";
            }
        }
    }
    return 0;
}