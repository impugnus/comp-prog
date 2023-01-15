#include <bits/stdc++.h>
using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int lines = 0;
	cin >> lines;
	
	string words[lines];
	
	for(int i = 0; i < lines;i++){
		cin >> words[i];
	}
	
	for(int i = 0; i < lines; i++){
		if(words[i].length() > 10){
				char fl = words[i][0];
				int length = words[i].length();
				char lc = words[i][length-1];
				cout << fl << length-2 << lc << "\n";
		} else {
				cout << words[i] << "\n";
		}
	}
	
	return 0;
}
