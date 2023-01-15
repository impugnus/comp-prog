#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 0, c=0; cin >> n;
	for(int i = 1; i <= n;i++) c+=n/i;
	cout << c << "\n";

	return 0;
}
