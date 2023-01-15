#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,v; cin >> n >> v;
	
	if(n-1<=v){
		cout << n-1 << "\n";
		return 0;
	}
	
	int res = v-1;
	for(int i = 1; i <= n-v; i++) res+=i;

	cout << res << "\n";

	return 0;
}
