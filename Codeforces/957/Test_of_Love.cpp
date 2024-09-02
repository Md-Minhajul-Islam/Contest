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
	int n, m, k; cin >> n >> m >> k;
	string s; cin >> s;
	if(m > n)
	{
		yes return;
	}
	int i = -1;
	while(i < n)
	{
		int l = -1, w = -1;
		for(int j = i+1; j <= i+m; j++)
		{
			if(j >= n){ yes return;}
			if(s[j] == 'L') l = j;
			if(s[j] == 'W') w = j;
		}
		if(l != -1)
		{
			if(l+m >= n) 
			{
				yes return;
			}
			i = l;
		}
		else if(w != -1)
		{
			i = w; int f = 0;
			while(k)
			{
				i++, k--;
				if(i >= n){yes return;}
				if(s[i] == 'C'){ no return;}
				if(s[i] == 'L') {f = 1; break;}
			}
			if(f == 0) {no return;}

		}
		else{no return;}
	}
	 yes
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