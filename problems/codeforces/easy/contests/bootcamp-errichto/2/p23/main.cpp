#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long int

using namespace std;

#define MAXN 1000000

ll primes[MAXN+1];
set<ll> a;

void make_sieve(ll n){
	for(ll i = 2; i <= n; i++) primes[i]=-1;
	
	for(ll i = 2; i <= n; i++){
		if(primes[i] == -1){
			primes[i]=1;
			
			for(ll j = i+i; j <=n; j+=i) primes[j]=0;
		}
	}
}

bool is_tprime(ll n){
	return (a.find(n) != a.end());
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t = 0;
	cin >> t;
	
	vector<ll> arr(t);
	for(ll i = 0; i < t; i++) cin >> arr[i];
	
	ll m = (t > 1 ? *max_element(arr.begin(), arr.end()) : arr[0]);
	make_sieve(sqrt(m));
	
	for(ll i = 2; i*i <= m; i++){
		if(primes[i]) a.insert(i*i);
	}
	
	for(ll i = 0; i < t; i++){
		cout << (is_tprime(arr[i]) ? "YES\n" : "NO\n");
	}
	 

	return 0;
}
