#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int l = 0; cin >> l;
	
	int c = 0;
	for(int i = 0; i < l; i++){
		int x = 0; cin >> x;
		c+=x&1;
	}
	
	cout << min(c, l-c) << "\n";
	
	return 0;
}
