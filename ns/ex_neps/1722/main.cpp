#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int exp(int b, int p){
	int res = 1;
	while(p){
		if(p%2) res*=b,p--;
		else b*=b, p/=2;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	ll ans = 0;
	while(l--){
		int n; cin >> n;
		int n1 = floor(n/10);
		int n2 = n%10;
		
		ans+=exp(n1, n2);
	}
	
	cout << ans << "\n";

	return 0;
}
