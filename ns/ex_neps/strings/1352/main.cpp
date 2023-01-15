#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s; cin >> s;
	for(int i = 0; i < (int)s.size(); i++){
		s[i]^=' ';
	}
	
	cout << s << "\n";

	return 0;
}
