#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void be(int base, int power){
	int res=1;
	
	while(power){
		if(power%2)res*=base, power--;
		else base*=base, power/=2;
	}
	
	cout << res << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int b, p; cin >> b >> p;
	
	be(b, p);

	return 0;
}
