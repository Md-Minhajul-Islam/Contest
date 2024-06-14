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
	 string s;
	 int i = 1;
	 while(k--)
	 {
	 	for(int j = 1; j <= i; j++) s += '0';
	 	s += '1';
	 	i++;
	 }
	 if(s.size() <= n+1)
	 {
	 	cout << "YES\n";
	 }
	 else cout <<"NO\n";
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