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
int tt = 0;
void solve()
{
	tt++;
	ll n, k; cin >>n >> k;

	ll mx_poss = (ll)(n/2)*(2ll*n-2ll*(ll)(n/2));
	if(k%2 || k > mx_poss) 
	{
		cout << "No\n";
		return;
	}

	ll l_val = n, r_val = 1, l_ind = 1, r_ind = n, sum = 0;
	vll v(n+1);
	for(int i = 1; i <= n; i++) v[i] = i;
	while(sum != k && l_ind <= r_ind)
	{
		if(2*abs(r_val-r_ind)+sum > k)
		{
			swap(v[l_ind], v[l_ind+(k-sum)/2]);
			break;
		}
		sum += 2*abs(l_val-l_ind);
		v[l_ind] = l_val, v[r_ind] = r_val;
		l_ind++, r_ind--;
		l_val--, r_val++;
	}
	cout << "Yes\n";
	for(ll i = 1; i <= n; i++) cout << v[i] << " \n"[i==n];

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    tt = 0;
    while(t--)
    {
        solve();
    }
    return 0;
}