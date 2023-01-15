#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	string s1, s2; cin >> s1 >> s2;
	
	int ans=0;
	for(int i = 0; i < l; i++){
		if(s1[i]==s2[i])ans++;
	}
	
	cout << ans << "\n";

	return 0;
}
