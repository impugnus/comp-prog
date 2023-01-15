#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int y,q; cin >> y >> q;
	
	string s; cin >> s;
	
	while(q--){
		int l, r; cin >> l >> r; l--; r--;
		
		char ans = 'B';
		
		for(int i = l; i <= r; i++){
			if(s[i]=='G'){
				ans='G';
				break;
			} else if(s[i]=='S') ans='S';
		}
		
		cout << ans << "\n";
	}

	return 0;
}
