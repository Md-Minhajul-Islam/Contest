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
	int n, k; cin >> n >> k;
	string a, b; cin >> a >> b;
	int one = 0, zero = 0, o = 0, z = 0;
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] != b[i]) cnt++;
		else if(a[i] == '1' && b[i] == '1') one++;
		else if(a[i] == '0' && b[i] == '0') zero++; 
		if(a[i] == '1') o++;
		else z++;
	}
	//cout << one << " " << zero << "\n";
	one /= 2, zero /= 2;
	if(cnt%2)
	{
		no return;
	}
	cnt /= 2;
	if(cnt > k){ no return; }
	k -= cnt;
	//cout << k << " " << one << " " << zero << "\n";
	if(k%2 == 0 || o >= 2 || z >= 2) yes
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