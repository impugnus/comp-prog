#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string x, y;
	cin >> x;
	cin >> y;
	
	for(unsigned int i = 0; i < x.length(); i++){
		int xn = int(x[i]);
		int yn = int(y[i]);
		
	
		
		if(xn < 97)
			xn += 32;
			
		if(yn < 97)
			yn += 32;
		
		if(xn < yn){
			cout << "-1\n";
			return 0;
		}
		else if(xn > yn){
			cout << "1\n";
			return 0;
		}
	}
	
	cout << "0\n";

	return 0;
}
