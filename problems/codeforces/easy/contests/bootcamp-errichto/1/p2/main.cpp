#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin>> n;
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	int x, y;
	cin >> x >> y;
	
	int ans = 0;
	for(int i = x; i <= y; i++) ans += a[i];
	
	cout << ans << "\n";

	return 0;
}
