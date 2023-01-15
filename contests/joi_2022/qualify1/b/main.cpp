#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int x,y,z; cin >> x >> y >> z;
	
	if(x+y>z+0.5) cout << "0\n";
	else cout << "1\n";

	return 0;
}
