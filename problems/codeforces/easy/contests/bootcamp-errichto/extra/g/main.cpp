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
	
	vector<int> ans;
	ans.push_back(a[l-1]);
	for(int i = l-1; i >= 1; i--){
		int sum = a[i]+a[i-1];
		ans.push_back(sum);
	}
	
	for(int i = l-1; i >= 0; i--) cout << ans[i] << " ";
	cout << "\n";
	
	return 0;
}
