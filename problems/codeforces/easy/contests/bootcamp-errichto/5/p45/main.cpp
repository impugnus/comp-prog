#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void f(ll n){
	if(n == 1) return;
	if(n%2==0) n/=2;
	else n=n*3+1;
	cout << n << "\n";
	f(n);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n = 0; cin >> n;
	cout << n << "\n";
	f(n);

	return 0;
}
