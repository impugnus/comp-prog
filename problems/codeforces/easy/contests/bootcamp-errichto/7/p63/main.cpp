#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m; cin >> n >> m;
	
	if(n>m) {cout << "YES\n"; return 0;}
	if(n<m) {cout << "NO\n"; return 0;}
	
	set<string >words;
	for(int i = 0; i < n+m; i++){
		string s; cin >> s;
		words.insert(s);
	}
	
	int k = n+m-words.size();
	cout << (k&1 ? "YES\n" : "NO\n");
	
	return 0;
}
