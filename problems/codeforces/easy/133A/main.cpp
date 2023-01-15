#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string t;
	cin >> t;
	
	int will_print = 0;
	
	for(unsigned int i = 0; i < t.size(); i++){
		if(t[i] == 'H' or t[i] == 'Q' or t[i] == '9') will_print=1;
	}
	
	(will_print) ? cout << "YES" : cout << "NO";

	return 0;
}
