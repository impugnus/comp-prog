#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l = 0; cin >> l;
	
	set<int> s;
	for(int i = 0; i <l; i++){
		int x = 0; cin >> x;
		s.insert(x);
		cout << s.size() << " ";
	}
	cout << "\n";
	
	return 0;
}
