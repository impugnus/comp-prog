#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

bool is_vowel(char c){
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;
	
	int len = (int)s.size();
	
	if((len == 1 && s[0]!='n' && !is_vowel(s[0])) || (s[len-1]!='n' && !is_vowel(s[len-1]))){
		cout << "NO\n";
		return 0;
	}
	
	bool ok =true;
	for(int i = 0; i < len-1; i++){
		if(s[i]=='n') continue;
		
		if(!is_vowel(s[i]) && !is_vowel(s[i+1])){
			ok=false;
			break;
		}
	}
	cout << (ok ? "YES\n" : "NO\n");

	return 0;
}
