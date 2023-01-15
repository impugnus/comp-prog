#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int array[] = {1,2,3,4,5,6,7,8,9};
	
	int left, right;
	left = right = 0;
	
	int to_search = 4;
	int index = 0;
	
	right = sizeof(array)/sizeof(array[0])-1;

	while(left <= right){
		int middle = (left+right)/2;
		
		if(array[middle] == to_search){
			index = middle;
			break;
		} else if(to_search > middle){
			left = middle++;
		} else
			right = middle--;
	}
	
	cout << "Found at pos: " << index << "\n";
	
	return 0;
}
