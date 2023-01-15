#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string t, d; cin >> t >> d;
	
	string ans = "";
	for(int i = 0; i < (int)d.size(); i++){
		ans+=t[d[i]-'a'];
	}
	cout << ans << "\n";

	return 0;
}
