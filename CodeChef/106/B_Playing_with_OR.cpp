// Q: 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int x = a[i] & (1 << 0);
            v.push_back(x);
        }
        int s = 0, cnt = 0;
        for(int i = 0; i < k; i++) s += v[i];
        if(s) cnt++;
        for(int i = k; i < n; i++)
        {
            s -= v[i-k];
            s += v[i];
            if(s) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}