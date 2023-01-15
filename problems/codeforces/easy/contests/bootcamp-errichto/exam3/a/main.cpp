#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s = "ROYGBIV";
	int n  = 0; cin >> n;
	
	int i = n%7;
	while(n>=7){
		cout << s;
		n-=7;
	}
	
	if(i!=0){
		if(i>3){
			for(int j = 0; j < i; j++){
				cout << s[j];
			}
		} else{
			for(int j = 3; j < 3+i; j++){
				cout << s[j];
			}
		}
	}
	
	cout << "\n";

	return 0;
}
