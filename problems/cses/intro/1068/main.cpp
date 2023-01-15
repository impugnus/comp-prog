#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n; cin >> n;
	
	cout << n << " ";
	while(n!=1){
		if(n%2==0) n/=2;
		else n = n*3+1;
		
		cout << n << " ";
	}
	cout << "\n";

	return 0;
}
