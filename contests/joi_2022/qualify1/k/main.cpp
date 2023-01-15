#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s;
	int n,k; cin >> n >> k >> s;
	
	int r = 0, w = 0;
	
	for(int i = 0; i < n; i++){
		if(s[i]=='R')r++;
		else w++;
	}
	
	if(r!=k) cout << "R\n";
	else cout << "W\n";

	return 0;
}
