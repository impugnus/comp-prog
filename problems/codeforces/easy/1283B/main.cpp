#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 0; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int f = n-n%k;
		f+=min(n%k,k/2);
		cout << f << "\n";
	}

	return 0;
}
