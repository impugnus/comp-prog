#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll gcd(int a, int b){
	if(a==0) return b;
	return gcd(b%a, a);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n1, n2, ans=0; cin >> n1 >> n2;
	for(ll i = n2; i >= 1; i--){
		ll v = gcd(n1, i);
		if(v==1){
			ans=i;
			break;
		}
	}
	
	cout << ans << "\n";

	return 0;
}
