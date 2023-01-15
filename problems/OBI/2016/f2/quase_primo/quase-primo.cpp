#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

#define K 45

using namespace std;

int n,k,p[K], soma;

// indice atual
// valor atual
// quantidade de fatores

inline void f(int i, ll mult, int qnt){
	if(mult > n) return;
	
	if(i==k){
		if(mult==1 or qnt==0) return;
		if(qnt%2) soma+=(n/mult);
		else soma-=(n/mult);
		return;
	}
	
	f(i+1, mult, qnt);
	f(i+1, mult*p[i], qnt+1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> k;
	for(int i = 0; i < k; i++) cin >> p[i];
	
	soma=0;
	f(0, 1, 0);
	cout << n-soma << "\n";
	
	return 0;
}
