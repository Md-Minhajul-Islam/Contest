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
	string a, b; cin >> a >> b;
	if(a.size() != b.size())
	{
		no return;
	}
	int j = -1, k = -1;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] != b[i])
		{
			if(j != -1 && k != -1) break;
			if(j == -1) j = i; else k = i; 
		}
	}
	if(j != -1 && k != -1)
	{
		swap(a[k], a[j]);
	}
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] != b[i])
		{
			no return;
		}
	}
	yes
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t; cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}