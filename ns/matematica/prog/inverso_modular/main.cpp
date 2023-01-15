#include <bits/stdc++.h>

using namespace std;

int gcdEx(int a, int b, int& x, int& y){
	if(a==0){
		x=0,y=1;
		return b;
	}
	
	int x1, y1;
	int gcd = gcdEx(b%a, a, x1, y1);
	
	x = y1 - (b/a) * x1;
	y = x1;
	
	return gcd;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a,m; cin >> a >> m;

	int inv,y;
	if(gcdEx(a,m,inv,y)!=1){
		cout << "-1\n";
		return 0;
	}
	
	inv%=m;
	if(inv<0)inv+=m;
	
	cout << inv << "\n";

	return 0;
}
