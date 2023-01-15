#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

ll mul(ll x, ll y, ll m){
	if(x==0) return 0;
	
	ll ans = mul(x/2, y, m);
	ans = (2*ans)%m;
	
	if(x%2==0) return ans;
	return (ans+y)%m;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll x,y,m; cin >> x >> y >> m;
	cout << mul(x,y,m) << "\n";

	return 0;
}
