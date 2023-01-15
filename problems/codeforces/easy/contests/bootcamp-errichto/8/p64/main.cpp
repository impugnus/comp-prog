#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int q = 0; cin >> q;
	
	
	unordered_set<string> plus;
	
	while(q--){
		char c; string s1; string s2;
		cin >> c >> s1 >> s2;
		
		if(c == '?'){
			if(plus.find(s1+s2) != plus.end()){
				cout << "YES\n";
			} else cout << "NO\n";
		} else if(c == '+'){
			plus.insert(s1+s2);
		} else plus.erase(s1+s2);
		
	}

	return 0;
}
