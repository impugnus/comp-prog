#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--){
		ll n,ans,a; cin >> n;
		ans = n*(n+1)/2;
		a = 1;
		while(a<=n) ans-=2*a, a*=2;
		
		cout << ans << "\n";
	}

	return 0;
}
