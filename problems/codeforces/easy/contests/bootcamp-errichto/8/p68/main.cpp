#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0, p = 0; cin >> n;
	set<int> s; int x; cin >> p;
	for(int i = 0; i < p; i++){
		cin >> x;
		s.insert(x);
	}
	cin >> p;
	for(int i = 0; i < p; i++){
		cin >> x;
		s.insert(x);
	} 
	
	cout << ((int)s.size() == n ? "I become the guy.\n" : "Oh, my keyboard!\n");

	return 0;
}
