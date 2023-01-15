#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

void solve(ll n){
	for(int i= 0 ; i < (1<<n); i++){
		ll val = (i^(i>>1));
		bitset<32> r(val);
		
		string s = r.to_string();
		cout << s.substr(32-n) << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n; cin >> n;
	solve(n);
	
	return 0;
}
