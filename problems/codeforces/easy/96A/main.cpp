#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	
	int quantity = 1;
	char c;
	char last = s[0];
	
	for(unsigned int i = 1; i < s.length(); i++){
		c = s[i];
		
		if(last == c) quantity++;
		else if(last != c && quantity < 7) quantity = 1;
		
		
		last = c;
	}
	
	(quantity >= 7) ? cout << "YES" : cout << "NO";

	return 0;
}
