#include <bits/stdc++.h>

#define pb push_back
#define ll long long int

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n; cin >> n;
	
	ll ans = 0;
	for(ll i = 0; i <= 63; i++){
		ll f = ((ll)1<<i);
		if((f&n)) ans++;
	}
	
	cout << ans << "\n";

	return 0;
}

