#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// A-Z (65 - 90)
	string s, ans; cin >> s;
	
	char idx[]={'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','7','7','7','8','8','8','9','9','9','9'};
	
	for(int i = 0; i < (int)s.size(); i++){
		if(s[i]>=65 && s[i]<=90){
			ans+=idx[s[i]-'A'];
		} else ans+=s[i];
	}
	
	cout << ans << "\n";

	return 0;
}
