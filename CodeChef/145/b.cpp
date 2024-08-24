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
	char prev = '#';
	string a;
	for(int i = 0; i < n;  i++)
	{
		if(prev != s[i])
		{
			prev = s[i]; a += s[i];
		}
		else continue;
	}
	int one = 0, zero = 0;
	for(int i = 0; i < a.size(); i++) 
		one += (a[i]=='1'), zero += (a[i]=='0');
	if(one > zero) cout << 0 << "\n";
	else if(one == zero || (n == 1 && zero)) cout << 1 << "\n";
	else cout << 2 << "\n";
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