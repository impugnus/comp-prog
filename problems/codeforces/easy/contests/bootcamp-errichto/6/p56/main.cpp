#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l = 0; cin >> l;
	
	vector<int> a(l);
	for(int i = 0; i < l; i++) cin >> a[i];
	
	int q = 0; cin >> q;
	while(q--){
		int n = 0; cin >> n;
		
		cout << *upper_bound(a.begin(), a.end(), n) << "\n";
	}
	
	return 0;
}
