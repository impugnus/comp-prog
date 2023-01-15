#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void test_case(){
	int l = 0; cin >> l;
	vector<ll> a(l);
	for(ll i = 0; i < l; i++) cin >> a[i];
	
	bool ok = false;
	for(ll i = 1; i < l; i++){
		if(a[i-1]<=a[i]){
			ok=true;
			break;
		}
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
