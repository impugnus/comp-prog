#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int64_t n = 0; cin >> n;
	int64_t x = (-100 + sqrt(10000 - 4 * (-n)))/2;
	
	cout << x << "\n";

	return 0;
}

