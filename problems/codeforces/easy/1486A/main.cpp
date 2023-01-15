#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void test_case(){
	int l = 0; cin >> l;
	
	ll sum = 0;
	bool ok = true;
	for(ll i = 0; i < l; i++){
		ll x = 0; cin >>x;
		sum+=x;
		if(sum<i) ok=false;
		sum-=i;
	}
		
	cout << (ok ? "YES\n" : "NO\n");
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 0; cin >> t;
	while(t--) test_case();

	return 0;
}
