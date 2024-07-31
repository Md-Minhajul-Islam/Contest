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
	int n; cin >> n;
	string s; cin >> s;
	ll ans = 0;
	stack<pair<char, int>> st;
	for(int i = 0; i < n; i++)
	{
		if(s[i] == '_')
		{
			if(st.empty())
			{
				st.push({'(', i});
			}
			else
			{
				ans += i-st.top().se;
				st.pop();
			}
		}
		else if(s[i] == '(') st.push({'(', i});
		else
		{
			ans += i-st.top().se;
			st.pop();
		}
	}
	cout << ans << "\n";
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