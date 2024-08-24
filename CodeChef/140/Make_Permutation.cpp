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
	int n; cin >> n; int a[n];
	for(int i = 0; i < n;i++) cin >> a[i];
	//sort(a, a+n);
	int flag[n+1];
	flag[0] = 1;
	memset(flag, 0, sizeof(flag));
	for(int i = 0; i < n; i++)
	{
		if(flag[a[i]] == 0) flag[a[i]] = 1;
		else
		{
			bool f = 0;
			for(int j = a[i]; j <= n; j++) 
			{
				if(flag[j] == 0)
				{
					flag[j] = 1;

					f = 1;
					break;
				}
			}
			if(f == 0)
			{
				cout << "NO\n";
				return;
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		if(flag[i] == 0) 
		{
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
	
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