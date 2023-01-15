#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

ll f(ll n){
	if(n == 1) return 1;
	
	return n*f(n-1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n = 0;
	cin >> n;
	
	cout << f(n) << "\n";

	return 0;
}
