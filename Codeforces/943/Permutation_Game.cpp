// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

void solve()
{
    ll n, k, bd, sh; cin >> n >> k >> bd >> sh;
    ll p[n + 1], a[n + 1];
    for(int i = 1; i <= n; i++) cin >> p[i];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int i = 1;
    ll b[n + 1], s[n + 1];
    while(i <= n)
    {
        s[i] = a[sh];
        b[i] = a[bd];
        bd = p[bd];
        sh = p[sh];
        i++;
    }
    ll prefb[n + 1], prefs[n + 1];
    prefb[0] = 0ll, prefs[0] = 0ll;
    for(int i = 1; i <= n; i++)
    {
        prefb[i] = prefb[i - 1] + b[i];
        prefs[i] = prefs[i - 1] + s[i];
    }
    ll bodya = 0, sasha = 0;
    for(int i = 1; i <= min(k, n); i++)
    {
        bodya = max(bodya, prefb[i] + b[i] * (k - i + 1) - b[i]);
        sasha = max(sasha, prefs[i] + s[i] * (k - i + 1) - s[i]);
    }
    if(sasha == bodya) cout << "Draw\n";
    else if(sasha > bodya) cout << "Sasha\n";
    else cout << "Bodya\n";
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