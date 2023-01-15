#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void test_case(){
	int ans = 0;
	int n = 0; cin >> n;
	
	while(n != 0){
		int d = n%10;
		ans = max(ans, d);
		n/=10;
	}
	
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 0;
	cin >> t;
	
	while(t--){
		test_case();
	}

	return 0;
}
