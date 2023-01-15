#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	for(int i = n-1; i >= 0; i--) cout << a[i] << " ";

	return 0;
}
