#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

void test_case(){
	int l; cin >> l;
	int cnt0=0,cnt1=0;
	for(int i = 0; i < l; i++){
		int v; cin >> v;
		if(v==0)cnt0++;
		else if(v==1)cnt1++;
	}
	cout << (1ll<<cnt0) * (ll)cnt1 << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
