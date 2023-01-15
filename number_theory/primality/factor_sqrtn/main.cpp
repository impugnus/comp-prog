#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void prime_fact(int n){
	for(int i = 2; i*i <= n; i++){
		if(n%i==0){
			while(n%i==0){
				n/=i;
				cout << i << " ";
			}
		}
	}
	if(n>1) cout << n;
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n = 0; cin >>n;
	
	prime_fact(n);

	return 0;
}
