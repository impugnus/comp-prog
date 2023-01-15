#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

void test_case(){
	int n,q;
	string s;
	cin >> n >> q >> s;
	while(q--){
		int l,r; cin >> l >> r; l--; r--;
		bool bad = true;
		
		for(int i = 0; i < l and bad; i++) if(s[i]==s[l]) bad=false;
		for(int i = r+1; i < n and bad; i++) if(s[i]==s[r]) bad=false;
	
		cout << (bad ? "NO\n" : "YES\n");
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
