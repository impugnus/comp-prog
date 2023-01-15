#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int l = 0; cin >> l;
	vector<int> a(l);
	for(int i = 0; i < l; i++) cin >> a[i];
	
	for(int i = 0; i < l; i++){
		if(i == 0){
			cout << abs(a[i]-a[i+1]) << " " << abs(a[i]-a[l-1]) << "\n";
			continue;
		}
		
		if(i==l-1){
			cout << abs(a[i]-a[l-2]) << " " << abs(a[i]-a[0]) << "\n";
			continue;
		}
		
		int mn = min(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
		int mx = max(abs(a[i]-a[0]), abs(a[i]-a[l-1]));
		cout << mn << " " << mx << "\n";
	}

	return 0;
}
