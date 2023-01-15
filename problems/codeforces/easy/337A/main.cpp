#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int students, puzzles;
	cin >> students >> puzzles;
	
	int a[puzzles];
	
	for(int i = 0; i < puzzles; i++){
		int x;
		cin >> x;
		a[i] = x;
	}
	
	sort(a, a+puzzles);
	
	int least = a[students-1] - a[0];
	
	for(int i = 1; i <= puzzles-students; ++i){
		if(a[i+students-1] - a[i] < least)
			least = a[i+students-1] - a[i];
	}
	
	cout << least << "\n";
	
	return 0;
}
