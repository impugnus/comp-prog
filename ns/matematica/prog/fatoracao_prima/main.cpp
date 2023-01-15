#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	
	int value = n;
	vector<int> primes;
	
	for(int i = 2; i*i <= n; i++){
		while(value%i==0){
			primes.pb(i);
			value/=i;
		}
	}
	
	if(value!=1) primes.pb(value);
	
	cout << primes.size() << "\n";
	for(int e : primes) cout << e << " ";
	cout << "\n";
	
	return 0;
}
