#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	int ans = 0;
	for(int i = 0 ; i < n; i++){
		int x; cin >> x;
		ans|=x;
	}
	
	cout << ans << "\n";

	return 0;
}
