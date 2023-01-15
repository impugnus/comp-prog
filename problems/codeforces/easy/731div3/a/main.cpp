#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

bool order(int a, int b, int c){
	return (b > a && b < c) || (b < a && b > c);
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 0;
	cin >> t;
	
	while(t--){
		int xa, ya, xb, yb, xf, yf, moves(0);
		cin >> xa >> ya >> xb >> yb >> xf >> yf;
		
		moves = abs(xa-xb) + abs(ya-yb);
		for(int i = 0; i < 2; i++){
			if(xa == xb && xb == xf){
				if(order(ya, yf, yb)){
					moves+=2;
				}
			}
			
			swap(xa, ya);
			swap(xb, yb);
			swap(xf, yf);
		}
		
		
		cout << moves << "\n";
	}
	

	return 0;
}
