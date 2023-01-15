#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	int array[] = {1,2,3,4,5,6,7,8,9,10,10};
	
	int x = 10;
	int n = 11;
	
	auto a = lower_bound(array, array+n, x);
	auto b = upper_bound(array, array+n, x);
	auto k = lower_bound(array, array+n, x)-array;
	auto r = equal_range(array, array+n, x);
	
	
	if(k < n && array[k] == x){
		cout << "Found at index: " << k << "\n";
	}
	
	cout << "A: " << a << "\n";
	cout << "A-ARRAY: " << a-array << "\n";

	cout << "B: " << b << "\n";
	cout << "B-A: " << b-a << "\n";
	
	cout << "R: " << r.second-r.first << "\n";

	return 0;
}
