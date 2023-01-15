#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t[5][5]={0};
	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++) cin >> t[i][j];
	}
	
	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			cout << ((t[i][j]+t[i][j-1]+t[i][j+1]+t[i-1][j]+t[i+1][j]+1)%2);
		}
		cout << "\n";
	}

	return 0;
}
