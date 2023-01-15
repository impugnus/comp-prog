#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

void test_case(){
	int l,r; cin >> l >> r;
	
	int d = r-l+1;
	
	int ans = 0;
	
	for(int i = 0; i < 32; i++){
		if(d<=(1<<i)){
			if((l&(1<<i)) && (r&(1<<i))) ans+=(1<<i);
		}
	}
	
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
