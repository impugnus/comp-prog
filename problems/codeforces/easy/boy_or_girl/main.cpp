#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	
	int boy = 0;
	
	int single_chars = 0;
	string already_seen;
	
	for(unsigned int i = 0; i < s.length(); i++){
		if(already_seen.find(s[i]) == string::npos){
			already_seen += s[i];
			single_chars++;
		}
	}

	if(single_chars % 2 == 0) boy = 0;
	else boy = 1;
	
	(boy) ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!";

	return 0;
}
