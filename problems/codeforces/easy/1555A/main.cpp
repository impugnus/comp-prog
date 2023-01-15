#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--){
		ll n; cin >> n;
		cout << max(6LL, n+1) / 2 * 5 << "\n";
	}

	return 0;
}
