#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> letters(27);

	int n,k; cin >> n >> k;
	string s; cin >> s;
	
	bool ok = true;
	for(int i = 0; i < (int)s.size(); i++){
		letters[s[i]-96]++;
	}
	
	for(int i = 1; i < 27; i++){
		if(letters[i] > k){
			ok=false; break;
		}
	}
	
	
	cout << (ok ? "YES\n" : "NO\n");

	return 0;
}
