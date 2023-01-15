#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s, t; cin >> s >> t;
	
	bool ok = true;
	for(int i = (int)s.size()-1,j=0; i >= 0; i--, j++){
		if(t[i] != s[j]){
			ok=false;
			break;
		}
	}
	
	cout << (ok ? "YES\n" : "NO\n");

	return 0;
}
