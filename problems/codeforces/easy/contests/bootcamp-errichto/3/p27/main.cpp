#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int findPos(vector<int>&a, int v){
	int i = 0;
	while(a[i] >= v) i++;
	a.insert(a.begin()+i, v);
	return i+1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	vector<int> notes(t);
	for(int i = 0; i < t; i++){
		int x;
		cin >> x;
		
		cout << findPos(notes, x) << "\n";
	}
	
	for(int i = 0; i < t; i++){
		cout << notes[i] << " ";
	}
	cout << "\n";
	
	

	return 0;
}
