#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int lines = 0;
	cin >> lines;
	
	int last, a, count, biggest;
	last = a = count = biggest = 0;

	while(lines--){
		cin >> a;
		
		if(a >= last) count++;
		else count=1;
		
		if(biggest < count) biggest = count;

		last = a;
	}

	cout << biggest << "\n";

	return 0;
}
