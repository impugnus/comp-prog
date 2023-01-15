#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if(a==0) return b;
	return gcd(b%a, a);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	int ans = 0;
	for(int i = 0; i < n; i++) ans = gcd(ans, a[i]);
	cout << ans << "\n";

	return 0;
}
