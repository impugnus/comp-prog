#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

bool is_vowel(char c){
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	
	string n;
	
	for(int i = 0; i < (int)s.size(); i++){
		if(is_vowel(s[i])) continue;
		else {
			n+='.';
			if(s[i] >= 65 && s[i] <= 90) n+=(s[i]+32);
			else n+=s[i];
		}
	}
	
	cout << n << "\n";

	return 0;
}
