#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string t;
	cin >> t;
	
	for(int i = 0; i < (int)t.size(); i++){
		switch(t[i]){
			case 'a':
				t[i] = '4';
				break;
			case 'i':
				t[i] = '1';
				break;
			case 'e':
				t[i] = '3';
				break;
			case 'o':
				t[i] = '0';
				break;
			case 's':
				t[i] = '5';
				break;
			default:
				break;
		}
	}
	
	cout << t << "\n";

	return 0;
}
