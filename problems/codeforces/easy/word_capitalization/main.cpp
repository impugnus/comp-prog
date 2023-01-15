#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	
	if((int)s[0] >= 97) s[0] -= 32;
	
	cout << s << "\n";

	return 0;
}
