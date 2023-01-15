#include <bits/stdc++.h>
using namespace std;

string repeatString(string s, int c){
	string result;
	
	for(int i = 0; i < c; i++){
		result.append(s);
	}
	
	return result;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	if(s.length() == 1){
		cout << s << "\n";
		return 0;
	}
	
	int n1, n2, n3;
	n1 = n2 = n3 = 0;
	
	for(unsigned int i = 0; i < s.length(); i+=2){
		if(s[i] == '1') n1++;
		else if(s[i] == '2')n2++;
		else n3++;
	}
	
	string result;
	
	
	result.append(repeatString("1 ", n1));
	result.append(repeatString("2 ", n2));
	result.append(repeatString("3 ", n3));
	
	replace(result.begin(), result.end(), ' ', '+');
	result.pop_back();
	
	cout << result << "\n";

	return 0;
}
