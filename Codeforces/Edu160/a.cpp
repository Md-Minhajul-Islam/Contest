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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >>t; 
    while(t--)
    {
        string s; cin >> s;
        int j = 0;
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] != '0')
            {
                j = i; break;
            }
        }

        string a = "0", b = "0"; 
        for(int i = 0; i < j; i++) a += s[i];
        for(int i = j; i < s.size(); i++) b += s[i];
        int aa, bb;
        aa = stoi(a); bb = stoi(b);
        // cout << aa << '-' << bb << '\n';
        if(aa >= bb || aa == 0 || bb == 0) cout << -1 << '\n';
        else cout << aa << ' ' << bb << '\n';
    }
    
    return 0;
}

