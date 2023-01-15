#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

bool is_prime(int n){
	if(n==1) return false;
	
	for(int i = 2; i*i<=n; i++){
		if(n%i==0) return false;
	}
	
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cout << "Type a number: ";
	
	int n = 0; cin >> n;
	cout << (is_prime(n) ? "Prime\n" : "Not prime\n");

	return 0;
}
