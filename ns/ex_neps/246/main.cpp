#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(n), s(n), ans;
	for(int i = 0; i < n; i++) cin >> a[i];
	
	s.assign(a.begin(), a.end());
	sort(s.begin(), s.end());

	for(int i = 0; i < n; i++){
		if(a[i]!=s[i]) ans.pb(a[i]);
	}
	
	sort(ans.begin(), ans.end());
	cout << ans.size() << "\n";
	for(int e : ans) cout << e << " ";
	cout << "\n";

	return 0;
}
