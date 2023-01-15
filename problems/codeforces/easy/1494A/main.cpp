#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;


void test_case(){
	string s; cin >> s;
	
	bool ok = false;
	for(int mask = 0; mask < 8; mask++){
		int bal=0;
		bool good=true;
		for(auto c : s){
			int p = c-'A';
			if(mask>>p&1) bal++;
			else bal--;
			if(bal<0) good=false;
		}
		if(bal!=0) good=false;
		if(good)ok=true;
	}
	cout << (ok?"YES\n":"NO\n");
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
