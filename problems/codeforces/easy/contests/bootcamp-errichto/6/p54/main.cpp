#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t=0,s=0; cin >> t;
	while(cin >> t) s^=t;
	
	cout << s << "\n";

	return 0;
}
