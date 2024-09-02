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
	string s, t; cin >> s;
	int i = 0;
	while(i < n)
	{
		if(s[i] == '1')
		{
			t += '1'; i++;
			continue;
		}
		while(i < n && s[i] == '0') i++;
		t += '0';
	}
	int one = 0, zero = 0;
	for(int i = 0; i < t.size(); i++) one += (t[i] == '1'), zero += (t[i] == '0');
	if(one > zero) cout << "Yes\n";
	else cout << "No\n";
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