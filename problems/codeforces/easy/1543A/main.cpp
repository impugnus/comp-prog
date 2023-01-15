#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--){
		ll a,b; cin >> a >> b;
		
		if(a==b){
			cout << "0 0\n";
			continue;
		}
		
		ll g = abs(a-b);
		ll m = min(a%g, g-a%g);
		cout << g << " " << m << "\n";
	}

	return 0;
}
