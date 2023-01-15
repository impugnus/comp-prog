#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;
#define MAXN 300002
int primes[MAXN];
int prefix[MAXN];

void make_sieve(){
	for(int i = 2; i < MAXN; i++) primes[i]=-1;
	for(int i = 2; i < MAXN; i++){
		if(primes[i]==-1){
			primes[i]=1;
			for(int j = i+i; j < MAXN; j+=i) primes[j]=0;
		}
	}
	
	prefix[0]=prefix[1]=0;
	for(int i = 2; i < MAXN; i++){
		prefix[i]=prefix[i-1];
		if(primes[i]) prefix[i]++;
	}
}

void test_case(){
	int s,e,c(0); cin >> s >> e;

	c = prefix[e]-prefix[s-1];
	
	cout << c << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	make_sieve();
	int t = 0; cin >> t;
	while(t--) test_case();

	return 0;
}
