#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve()
{
	string s; cin >> s;
	bool f = 0;
	for(int i = 0; i < s.size()-1; i++)
	{
		if(s[i] == s[i+1])
		{
			for(char j = 'a'; j <= 'z'; j++)
			{
				if(s[i] != j)
				{
					string ans; ans +=  s.substr(0, i+1);
					ans += j;
					ans += s.substr(i+1);
					cout << ans << "\n";
					return;
				}
			}
		}
	}
	for(char i = 'a'; i <= 'z'; i++)
	{
		if(s[0] != i)
		{
			string ans; ans +=  i;
			ans += s;
			cout << ans << "\n";
			return;
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}