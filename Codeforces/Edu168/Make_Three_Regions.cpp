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
	string s1, s2; cin >> s1 >> s2;
	ll cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if(s1[i] == '.')
		{
			if(i-1 >= 0 && s2[i-1] == 'x' && s2[i] == '.' && i+1 < n && s2[i+1] == 'x' && s1[i-1] == '.' && s1[i+1] == '.')
			{
				// cout << s1 << " " << i << "\n";
				cnt++;
			}
		}
		if(s2[i] == '.')
		{
			if(i-1 >= 0 && s1[i-1] == 'x' && s1[i] == '.' && i+1 < n && s1[i+1] == 'x' && s2[i-1] == '.' && s2[i+1] == '.')
			{
				// cout << s2 << " " << i << "\n";
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
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