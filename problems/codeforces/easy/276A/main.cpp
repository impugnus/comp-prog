#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n, k; cin >> n >> k;
	
	ll t[n], f[n];
	for(ll i = 0; i < n; i++){
		cin >> f[i];
		cin >> t[i];
	}
	
	ll mx = -INT_MAX;
	for(ll i = 0; i < n; i++){
		if(t[i] > k) mx=max(mx, f[i]-(t[i]-k));
		else mx=max(mx, f[i]);
	}
	
	cout << mx << "\n";

	return 0;
}
