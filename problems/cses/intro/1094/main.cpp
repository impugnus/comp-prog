#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll ans = 0, last = 0;
	int l; cin >> l;
	for(int i = 0; i < l; i++){
		ll v; cin >> v;
		if(i==0){
			last=v;
			continue;
		}
		
		if(last>v) ans+=(last-v);
		else last=v;
		
	}
	cout << ans << "\n";

	return 0;
}
