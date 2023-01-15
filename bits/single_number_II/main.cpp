#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	vector<int> ar(l), f(32, 0);
	for(int i = 0; i < l; i++) cin >> ar[i];
	
	int ans = 0;
	for(int e : ar){
		for(int i = 0; i < 32; i++) if(e&(1<<i)) f[i]++;
	}
	
	for(int i = 0; i < 32; i++){
		if(f[i]%3==1) ans+=(1<<i);
	}
	
	cout << ans << "\n";

	return 0;
}
