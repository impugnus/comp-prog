#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l = 0; string s;
	cin >> l >> s;
	int ans = 0;
	
	for(int i = 0; i < l; i++){
		if((s[i]-48)%2==0)ans+=(i+1);
	}
	
	cout << ans << "\n";

	return 0;
}
