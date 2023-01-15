#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n,m; cin >> n >> m;
	vector<ll> d;
	d.push_back(0);
	
	for(ll i = 0; i < n; i++){
		ll x = 0; cin >> x;
		d.push_back(x+d.back());
	}
	
	ll r=0;
	for(ll i = 0; i < m; i++){
		ll value = 0; cin >> value;
		while(value > d[r]) r++;
		cout << r << " " << value-d[r-1] << "\n";
	}

	return 0;
}
