#include <iostream>
using namespace std;

bool check(char x)
{
    return (x != 'A' && x != 'E' && x != 'I' && x != 'O' && x != 'U');
}

int main() {
    // your code goes here
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int f = 1;

        if(check(s[0]) && !check(s[1]) && check(s[2]) && !check(s[3]) && check(s[4]) && !check(s[5]) && check(s[6]) && check(s[7])) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
