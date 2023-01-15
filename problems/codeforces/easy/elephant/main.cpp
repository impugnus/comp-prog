#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int steps = 0;
	cin >> steps;
	
	int total = 0;
	
	while(steps > 5){
		steps-=5;
		total++;
	}
	
	total++;
	
	cout << total << "\n";
	
	return 0;
}
