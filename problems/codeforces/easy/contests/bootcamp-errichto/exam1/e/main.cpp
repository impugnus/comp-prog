#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

#define MAXN 10001000

int primes[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 0;
	cin >> n;
	
	vector<int> p;
	for(int i = 2; i <= n; i++) primes[i]=-1;
	for(int i = 2; i<= n; i++){
		if(primes[i]==-1){
			primes[i]=1;
			p.push_back(i);
			
			for(int j = i+i; j <= n; j+=i) primes[j]=0;
		}
	}
	
	int c = 0;
	for(int i = 0; i < (int)p.size(); i++){
		if(primes[p[i]] && primes[p[i]-2]) c++;
	}
	
	cout << c << "\n";
	

	return 0;
}
