#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,t; cin >> n >> t;
	vector<int> c(n+2),b(n+2),v(n+2),op(n+2);
	for(int i = 1; i <= n; i++) cin >> c[i];
	for(int i = 1; i <= n; i++) cin >> b[i];

	for(int i = 1; i <= t; i++){
		int x,y; cin >> x >> y;
		op[x]++;
		op[y+1]--;
	}
	
	v[0]=0;
	for(int i = 1; i <= n; i++){
		v[i]=v[i-1]+op[i];
	}
	
	for(int i= 1 ; i <= n; i++){
		if(v[i]%2==0) cout << c[i] << " ";
		else cout << b[i] << " ";
	}

	return 0;
}


