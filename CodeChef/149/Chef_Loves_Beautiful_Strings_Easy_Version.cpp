#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	
 int t; cin >> t;
 while(t--)
 {
    int n; cin >> n;
    string a; cin >> a;
    ll valid = 0, invalid = 0;
    for(int i= 0; i < n-1; i++)
    {
        if(a[i]!= a[i+1]) valid++;
        else invalid++;
    }
    ll ans = valid*invalid;
    ans += valid*(valid-1)/2;
    cout << ans << "\n";
 }
 return 0;
}