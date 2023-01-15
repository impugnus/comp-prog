#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s; cin >> s;
	int l = (int)s.size();
	
	int c = 0;
	for(int i = 0; i < l; i++){
		if(s[i]>=65 && s[i] <= 90) c++;
	}
	
	if(c>l-c){
		for(int i = 0; i < l; i++)s[i]=toupper(s[i]);
	} else{
		for(int i = 0; i < l; i++) s[i]=tolower(s[i]);
	}
	
	
	cout << s << "\n";
	

	return 0;
}
