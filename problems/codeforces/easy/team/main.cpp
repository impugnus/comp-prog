#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int lines = 0;
	cin >> lines;
	
	int solves = 0;
	
	for(int i = 0; i < lines; i++){
		int x, y, z;
		
		cin >> x >> y >> z;
		
		if(x+y+z >= 2) solves +=1;
	}
	
	cout << solves << "\n";

	return 0;
}
