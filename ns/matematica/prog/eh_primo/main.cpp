#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n; cin >> n;
	
	if(n==1){
		cout << "N\n";
		return 0;
	}
	
	bool is_prime = true;
	for(ll i = 2; i*i <= n; i++){
		if(n%i==0){
			is_prime=false;
			break;
		}
	}
	
	cout << (is_prime ? "S\n" : "N\n");

	return 0;
}
