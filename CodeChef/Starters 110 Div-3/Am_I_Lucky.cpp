#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	{
		int n, b, k; cin >> n >> b >> k;
		int g = n - b;
		int rem_b = b - (b / k) * k;
		int rem_g = g - (g / k) * k;
		int rem = abs(rem_g - rem_b);
		cout << rem << '\n';
	}
	return 0;
}
