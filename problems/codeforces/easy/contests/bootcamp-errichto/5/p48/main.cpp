#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n,p; cin >> n >> p;
	
	ll x,y,z;
	x=y=1;
	n--;
	while(n--){
		z=y;
		y=(x+y)%p;
		x=z;
	}
	
	cout << y << "\n";


	return 0;
}
