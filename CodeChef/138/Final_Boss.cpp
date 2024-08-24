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
	int h, n; cin >> h >> n;
	vector<int> a(n), c(n);
	for(int& i: a) cin >> i;
	for(int& i: c) cin >> i;
	set<pair<long long, int>> S;
	for(int i = 0; i < n; i++){
		S.insert({1, i});
	}
	long long last_turn = 1;
	while(h > 0){
		auto [turn, i] = *S.begin();
		S.erase(S.begin());
		last_turn = turn;
		h -= a[i];
		S.insert({turn + c[i], i});
	}
	cout << last_turn << "\n";

	// collected
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