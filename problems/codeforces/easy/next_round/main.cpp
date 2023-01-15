#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k = 0;
	cin >> n >> k;
	
	int scores[n];
	
	for(int i = 0; i < n; i++){
		cin >> scores[i];
	}
	
	
	int definer = scores[k-1];
	int approves = 0;
	
	for(int i = 0; i < n; i++){
		if(scores[i] > 0 && scores[i] >= definer) approves +=1;
	}
	
	cout << approves << "\n";
	
	return 0;
}
