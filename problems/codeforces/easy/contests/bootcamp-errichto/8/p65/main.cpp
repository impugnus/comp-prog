#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n,k; cin >> n >> k;
	
	ll ans = 0;
	if(k <= (n+1)/2) ans=2*k-1;
	else ans=2*(k-(n+1)/2);
	
	cout << ans << "\n";

	return 0;
}
