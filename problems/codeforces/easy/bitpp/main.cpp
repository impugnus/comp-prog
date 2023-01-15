#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;
	
	
	int x = 0;
	
	for(int i = 0; i < n; i++){
		string stat;
		cin >> stat;
		
		if(stat[0] == '+' or stat[1] == '+') x+=1;
		else if(stat[0] == '-' or stat[1] == '-') x-=1;
	}
	
	cout << x << "\n";

	return 0;
}
