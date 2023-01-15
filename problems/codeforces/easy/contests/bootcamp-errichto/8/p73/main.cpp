#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l = 0; cin >> l;
	
	vector<int> a(l);
	set<int> s;
	for(int i = 0; i < l; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	for(int i = 0; i < l; i++){
		int x = a[i];
		if(x>1 && s.find(x-1) == s.end()) s.insert(x-1);
		else if(s.find(x) == s.end()) s.insert(x);
		else if(s.find(x+1) == s.end()) s.insert(x+1);
	}
	
	cout << s.size() << "\n";

	return 0;
}
