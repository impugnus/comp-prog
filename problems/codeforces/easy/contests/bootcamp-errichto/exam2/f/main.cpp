#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;


int make_sieve(int s, int e){
	vector<int> primes(e+1);
	vector<int> prefix(e+1);
	
	for(int i = 2; i < e; i++) primes[i]=-1;
	for(int i = 2; i < e; i++){
		if(primes[i]==-1){
			primes[i]=1;
			for(int j = i+i; j < e; j+=i) primes[j]=0;
		}
	}
	
	prefix[0]=prefix[1]=0;
	for(int i = 2; i < e; i++){
		prefix[i]=prefix[i-1];
		if(primes[i]) prefix[i]++;
	}
	
	return prefix[e-1]-prefix[s-1];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int s, e; cin >> s >> e;
	
	
	cout << make_sieve(s, e+1) << "\n";
	
	return 0;
}
