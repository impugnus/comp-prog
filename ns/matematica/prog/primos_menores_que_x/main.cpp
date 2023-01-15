#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 10000001

using namespace std;

int primes[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;

	for(int i = 2; i <= n; i++) primes[i]=-1;
	for(int i = 2; i <= n; i++){
		if(primes[i]==-1){
			primes[i]=1;
			for(int j= i+i; j <= n; j+=i) primes[j]=0;
		}
	}
	
	for(int i = 2; i <= n; i++){
		if(primes[i]) cout << i << " ";
	}
	cout << "\n";

	return 0;
}
