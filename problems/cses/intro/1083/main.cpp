#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	int res = 0;
	for(int i = 1; i <= n-1; i++){
		int v; cin >> v;
		res^=v;
		res^=i;
	}
	res^=n;
	cout << res << "\n";

	return 0;
}
