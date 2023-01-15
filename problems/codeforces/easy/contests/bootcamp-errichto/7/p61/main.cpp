#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n,m;cin >>n >> m;

	set<ll> a;
	set<ll> b;

	while(m--){
		ll x, y; cin >> x >> y;
		a.insert(x);
		b.insert(y);
		cout << ((n-a.size()) * (n-b.size())) << " ";
	}
	cout << "\n";

	return 0;
}
