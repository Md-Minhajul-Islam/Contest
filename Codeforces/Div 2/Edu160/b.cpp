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
        string s; cin >> s;
        int cnt_0 = 0, cnt_1 = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0') cnt_0++;
            else cnt_1++;
        }
        int del = s.size();
        for(int i = 0; i < s.size(); i++)
        {
            cnt_0 -= s[i]=='1';
            cnt_1 -= s[i]=='0';
            if(cnt_0 < 0 || cnt_1 < 0) break;
            del--;
        }
        cout << del << '\n';
    }
    return 0;
}