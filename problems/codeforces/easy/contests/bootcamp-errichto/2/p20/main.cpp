#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

bool is_prime(int n){
	if(n <= 1) return false;
	if(n <= 3) return true;
	
	if(n%2==0 || n%3==0) return false;
	
	for(int i =5; i*i <= n; i+=6){
		if(n%i == 0 || n%(i+2) == 0) return false;
	}
	
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 0;
	cin >> n;
	
	int m = 2;
	bool ok = false;
	while(!ok){
		if(n*m-n != n && !is_prime(n*m) && !is_prime(n*m-n)){
			cout << n*m << " " << n*m-n;
			break;
		}
		
		m++;
	}

	return 0;
}
