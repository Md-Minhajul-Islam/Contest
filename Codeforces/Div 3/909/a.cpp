// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if((n-1)%3 == 0 || (n+1)%3 == 0)
            cout << "First\n";
        else cout  <<"Second\n";
    }
    return 0;
}