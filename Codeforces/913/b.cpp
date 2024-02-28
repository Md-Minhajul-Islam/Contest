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
    
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        stack<int> u, d;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B')
            {
                s[i] = '0';
                if(!u.empty())
                {
                    s[u.top()] = '0';
                    u.pop();
                }
            }
            else if(s[i] == 'b')
            {
                s[i] = '0';
                if(!d.empty())
                {
                    s[d.top()] = '0';
                    d.pop();
                }
            }
            else if(s[i] >= 'a' && s[i] <= 'z') d.push(i);
            else u.push(i);
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != '0') cout << s[i];
        }
        cout << '\n';
    }
    
    return 0;
}