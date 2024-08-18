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
	int a[n], b[n], sum1 = 0, sum2 = 0;
	for(int i = 0; i < n;i++) cin >> a[i];
	for(int i = 0; i < n;i++) cin >> b[i];
	int pref1[n+1], pref2[n+1]; pref1[n] = 0, pref2[n] = 0;
	for(int i = n-1; i >= 0; i--)
	{
		if(a[i] != b[i])
		{
			sum1 += (a[i] == 1);
			sum2 += (b[i] == 1);
			a[i] = b[i] = 0;
		}
		pref1[i] = pref1[i+1]+a[i];
		pref2[i] = pref2[i+1]+b[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i]==1)
		{
			if(sum1 == sum2)
			{
				if(pref1[i] < pref2[i]) sum1++;
				else sum2++; 
			}
			else if(sum1 < sum2) sum1++;
			else sum2++;
		}
		if(a[i] == -1)
		{
			if(sum1 == sum2)
			{
				if(pref1[i] > pref2[i]) sum1--;
				else sum2--;
			}
			else if(sum1 > sum2) sum1--;
			else sum2--;
		}
	}
	cout << min(sum1, sum2) << '\n';

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