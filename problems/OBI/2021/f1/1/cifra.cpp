#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

bool is_vowel(char c){
	return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

char get_char(int c){
	if(c>='b'&&c<='c') return 'a';
	else if(c>='d'&&c<='g') return 'e';
	else if(c>='h'&&c<='l') return 'i';
	else if(c>='m'&&c<='r') return 'o';
	else return 'u';
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	string a="abcdefghijklmnopqrstuvxz";
	
	string s; cin >> s;
	string ans;
	for(int i = 0; i < (int)s.size(); i++){
		if(!is_vowel(s[i])){
			char v = s[i];
			ans+=v;
			ans+=get_char(v);
			
			if(v!='z'){
				while(is_vowel(v+1)) v++;
				ans+=v+1;
			} else ans+=v;
		} else ans+=s[i];
	}
	cout << ans << "\n";
	
	return 0;
}
