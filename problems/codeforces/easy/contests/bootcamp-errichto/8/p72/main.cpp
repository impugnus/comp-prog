#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;

	string s1,s2;
	for(int i = 0; i < (int)s.size(); i++){
		s1+=s[i];
		if(s[i]!='a') s2+=s[i];
		
		if(s1.size()+s2.size()==s.size() && s1+s2==s){
			cout << s1 << "\n";
			return 0;
		}
	}
	
	cout << ":(\n";
	
	return 0;
}
