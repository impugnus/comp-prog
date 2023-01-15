#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	int res = 0;
	for(int i = 0; i < l; i++){
		int v; cin >> v;
		res^=2*v;
	}
	
	cout << res << "\n";

	return 0;
}
/*
4 3 9 1

8  7  13  5
7  6  12  4
13 13 18  10
5  4  10  2

A^A=0
apenas a diagonal sobra
*/
