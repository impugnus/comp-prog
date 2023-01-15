#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l = 0; cin >> l;
	string s; cin >> s;
	string ans;
	for(int i = 0; i < l; i++) if((l-i)%2)ans+=s[i];
	else ans=s[i]+ans;
	
	cout << ans << "\n";

	return 0;
}
