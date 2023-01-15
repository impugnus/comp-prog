#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n,x; cin >> n >> x;
	ll sum = 0;
	for(ll i = 0; i < n; i++){
		ll v = 0; cin >> v;
		sum+=v;
		if(sum >= x){
			cout << i+1 << "\n";
			return 0;
		}
	}
	
	cout << "-1\n";

	return 0;
}
