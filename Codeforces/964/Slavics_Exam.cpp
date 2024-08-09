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
	string s, t, a; cin >> s >> t;
	int i = 0, j = 0;
	int len = s.size(), len2 = t.size();
	for(i = 0; i < len; i++)
	{
		if(j < len2 && (s[i]==t[j] || s[i]=='?')) s[i] = t[j], j++;
	}
	if(j == len2)
	{
		for(int i = 0; i < len; i++)
		{
			if(s[i] == '?') s[i] = 'a';
		}
		cout << "YES\n" << s << "\n";
	}
	else no
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