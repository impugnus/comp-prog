#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

void test_case(){
	vector<ll> a(3);
	for(int i = 0; i < 2; i++){
		ll v; cin >> v;
		a[i]=v;
	}
	ll n; cin >> n;
	a[2]=a[0]^a[1];
	cout << a[n%3] << "\n";
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
