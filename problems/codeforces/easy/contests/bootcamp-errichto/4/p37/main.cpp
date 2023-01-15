#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin >> t;
	ll coins = 0;
	ll mul = 1;
	ll z = 0;
	for(ll i = 0; i < t; i++){
		ll x; cin >> x;
		
		if(!x) z++;
		else if(x>0) coins+=(x-1);
		else if(x<0){
			coins+=(-x-1);
			mul*=-1;
		}
	}
	
	if(mul == -1 && !z) coins+=2;
	
	cout << coins+z << "\n";
	

	return 0;
}
