#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int inital_cost, dollars, bananas;
	cin >> inital_cost >> dollars >> bananas;
	
	int total_cost = 0;
	
	for(int i = 1; i <= bananas; i++){
		total_cost += inital_cost*i;
	}
	
	int to_borrow = total_cost - dollars;
	
	if(to_borrow < 0) to_borrow = 0;
	cout << to_borrow << "\n";

	return 0;
}
