#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n = 0; cin >> n;
	
	vector<ll> a(n);
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	
	ll ans = 0;
	for(ll i = 0; i < n-1; i++){
		ans+=a[i+1] - a[i] - 1;
	}
	
	cout << ans << "\n";

	return 0;
}
