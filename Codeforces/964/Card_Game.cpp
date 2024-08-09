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
	int a1, a2, b1 , b2; cin >> a1 >> a2 >> b1 >> b2;
	int cnt = 0, a = 0, b = 0;

	if(a1 > b1) a++; if(a1 < b1) b++;
	if(a2 > b2) a++; if(a2 < b2) b++;
	if(a > b) cnt++;
	a = 0, b = 0;

	if(a1 > b2) a++; if(a1 < b2) b++;
	if(a2 > b1) a++; if(a2 < b1) b++;
	if(a > b) cnt++;
	a = 0, b = 0;

	if(a2 > b1) a++; if(a2 < b1) b++;
	if(a1 > b2) a++; if(a1 < b2) b++;
	if(a > b) cnt++;
	a = 0, b = 0;

	if(a2 > b2) a++; if(a2 < b2) b++;
	if(a1 > b1) a++; if(a1 < b1) b++;
	if(a > b) cnt++;
	
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