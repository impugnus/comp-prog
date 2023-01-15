#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n = 0; cin >> n;
	
	if((n&1)==0) cout << "Mahmoud\n";
	else cout << "Ehab\n";

	return 0;
}
