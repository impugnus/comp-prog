#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 0; cin >> t;
	while(t--){
		ll n = 0; cin >> n;
		cout << ((n&(n-1))!=0 ? "YES\n" : "NO\n");
	}

	return 0;
}
