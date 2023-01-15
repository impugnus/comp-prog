#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int pw = 2; pw < 30; ++pw) {
			int val = (1 << pw) - 1;
			if (n % val == 0) {
				cerr << val << endl;
				cout << n / val << endl;
				break;
			}
		}
	}
	
	return 0;
}
