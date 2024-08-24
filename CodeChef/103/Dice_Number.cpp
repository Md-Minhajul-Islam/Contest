// Q: 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3], b[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];
        for (int i = 0; i < 3; i++)
            cin >> b[i];
        sort(a, a + 3);
        sort(b, b + 3);
        int alice = 0, bob = 0;
        for (int i = 2; i >= 0; i--)
        {
            alice = alice * 10 + a[i];
            bob = bob * 10 + b[i];
        }
        if (alice > bob)
            cout << "Alice\n";
        else if (bob > alice)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }
    return 0;
}