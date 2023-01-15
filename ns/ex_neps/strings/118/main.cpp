#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

bool is_vowel(char c){
	return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s, t; cin >> s;

	for(int i = 0; i < (int)s.size(); i++){
		if(is_vowel(s[i])) t+=s[i];
	}
	
	bool f = true;
	for(int i = 0; i < (int)t.size()/2; i++){
		if(t[i]!=t[(int)t.size()-i-1]){
			f=false;
			break;
		}
	}
	
	cout << (f ? "S\n" : "N\n");

	return 0;
}
