#include <bits/stdc++.h>

#define ll long long

using namespace std;

int fast_expo(int b, int e, int m){
	if(e==0) return 1%m;
	
	ll ans = fast_expo(b, e/2, m);
	ans=(ans*ans)%m;
	
	if(e%2==0) return ans;
	return (ans*b)%m;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// Retorna (b^e)%m
	int b, e, m; cin >> b >> e >> m;

	cout << fast_expo(b,e,m) << endl;

	return 0;
}
