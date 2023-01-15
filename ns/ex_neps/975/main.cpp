#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end(), greater<int>());
	
	int ans = 0;
	for(int i = 0; i < n; i++){
		if((i+1)%3==0) continue;
		else ans+=a[i];
	}
	
	cout << ans << "\n";

	return 0;
}
