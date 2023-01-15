#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m,a,b; cin >> m >> a >> b;
	cout << max(m-a-b, max(a,b)) << "\n";

	return 0;
}
