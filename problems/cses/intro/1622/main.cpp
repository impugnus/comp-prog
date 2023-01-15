#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

set<string> ans;

void print(string pre, string suf){
	if(suf.length() == 0){
		ans.insert(pre);
		return;
	}
	
	for(int i =0 ; i < (int)suf.length(); i++){
		print(pre+suf[i], suf.substr(0, i) + suf.substr(i+1));
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s; cin >> s;
	sort(s.begin(), s.end());
	print("", s);
	
	cout << ans.size() << "\n";
	for(auto e : ans) cout << e << "\n";

	return 0;
}
