#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t=0; cin >> t;
	while(t--){
		int n = 0; cin >> n;
		
		if(n%2==1){
			cout << "7";
			n-=3;
		}
		
		while(n>0){
			cout << "1";
			n-=2;
		}
		cout << "\n";
	}

	return 0;
}
