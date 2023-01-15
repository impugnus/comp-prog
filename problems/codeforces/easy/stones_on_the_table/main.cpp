#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int lines = 0;
	cin >> lines;
	
	string s;
	cin >> s;
	
	int count = 0;
	
	char c = s[0];
	for(unsigned int i = 1; i < s.length(); i++){
		if(c == s[i]) count++;
		
		c = s[i];
	}
	
	cout << count << "\n";

	return 0;
}
