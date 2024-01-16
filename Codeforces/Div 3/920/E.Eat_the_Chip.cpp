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

int h, w, xa, ya, xb, yb;

bool isValid(int x)
{
    if(x >= 1 && x <= h) return 1;
    else return 0;
}
int turn_alice()
{
    xa += 1;
    int op1 = ya-1, op2 = ya+1;
    if(!isValid(xa)) return 0;
    if(xa == xb && (yb == op1 || yb == ya || yb == op2)) return 1;
    else if(xa >= xb) return 0;
    else if(abs(xa-xb)%2 == 0)
    {
        if(yb > ya ) ya = op2;
        else if(yb < ya) ya = op1;
    }
    else
    {
        if(yb > ya && op1 >= 1) ya = op1;
        else if(yb < ya && op2 <= w) ya = op2;
    }
    return -1;
}
int turn_bob()
{
    xb -= 1;
    int op1 = yb-1, op2 = yb+1;
    if(!isValid(xb)) return 0;
    if(xb == xa && (ya == op1 || ya == yb || ya == op2)) return 2;
    else if(xb <= xa) return 0;
    else if(abs(xa-xb)%2 == 0)
    {
        if(ya > yb) yb = op2;
        else if(ya < yb) yb = op1;
    }
    else
    {
        if(ya > yb && op1 >= 1) yb = op1;
        else if(ya < yb && op2 <= w) yb = op2;
    }
    return -1;
}

void solve()
{
    cin >> h >> w >> xa >> ya >> xb >> yb;
    int draw = -1;
    while(draw == -1)
    {
        draw = turn_alice();
        if(draw == -1) draw = turn_bob();
    }
    if(draw == 0) cout << "Draw\n";
    else if(draw == 1) cout << "Alice\n";
    else cout << "Bob\n";
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