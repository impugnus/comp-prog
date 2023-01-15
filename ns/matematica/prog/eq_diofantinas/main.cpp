#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int gcdEx(int a, int b, int& x, int& y){
	if(a==0){
		x=0,y=1;
		return b;
	}
	
	int x1, y1;
	int gcd = gcdEx(b%a, a, x1, y1);
	x=y1-(b/a)*x1;
	y=x1;
	
	return gcd;
}

bool findSol(int a, int b, int c, int& x, int& y){
	if(a==0 && b == 0){
		if(c==0){
			x=y=0;
			return true;
		}
		return false;
	}
	
	int gcd = gcdEx(abs(a), abs(b), x, y);
	
	if(a<0)x=-x;
	if(b<0)y=-y;
	
	if(c%gcd!=0) return false;
	
	int t = c/gcd;
	x*=t, y*=t;
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a,b,c; cin >> a >> b >> c;
	
	int x, y;
	if(!findSol(a,b,c,x,y)) cout << "-1\n";
	else cout << "1\n" << x << " " << y << "\n";

	return 0;
}
