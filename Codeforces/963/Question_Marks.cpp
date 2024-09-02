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
	int a = 0, b = 0, c = 0, d = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'A') a++;
		if(s[i] == 'B') b++;
		if(s[i] == 'C') c++;
		if(s[i] == 'D') d++;
 	}
 	int ans = 0;
 	ans += min(n, a);
 	ans += min(n, b);
 	ans += min(n, c);
 	ans += min(n, d);
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