#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int primes[100];

void sieve(int n){
	for(int i = 2; i <= n; i++) primes[i]=-1;
	for(int i = 2; i <= n; i++){
		if(primes[i]==-1){
			primes[i]=1;
			for(int j = i+i; j <= n; j+=i) primes[j]=i;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n = 0; cin >> n;
	sieve(n);
	
	while(n!=1){
		if(primes[n]!=1){
			cout << primes[n] << " ";
			n/=primes[n];
		} else cout << n << " ", n=1;
	}

	return 0;
}
