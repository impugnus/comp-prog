#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void solve(){
	string p, h;
	cin >> p;
	cin >> h;
	
	if(p.size() > h.size()){
		cout << "NO\n";
		return;
	}
	
	sort(p.begin(), p.end());

	int len = p.size();
	for(string::size_type i = 0; i < h.size(); i++){
		string s = h.substr(i, len);
		sort(s.begin(), s.end());
		
		if(p == s){
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 0;
	cin >> t;
	
	while(t--) solve();

	return 0;
}
