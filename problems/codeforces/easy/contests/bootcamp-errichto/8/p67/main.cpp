#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m; cin >> n >> m;
	
	cout << (m ? min(m, n-m) : 1) << "\n";

	return 0;
}
