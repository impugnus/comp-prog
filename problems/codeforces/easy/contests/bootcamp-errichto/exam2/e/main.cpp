#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int s[3][3];
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> s[i][j];
		}
	}
	
	int sum = (s[0][1] + s[0][2] + s[1][0] + s[1][2] + s[2][0]+s[2][1])/2;
	
	s[0][0] = sum-s[0][1] - s[0][2];
	s[1][1] = sum-s[1][0] - s[1][2];
	s[2][2] = sum-s[2][0] - s[2][1]; 
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << s[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
