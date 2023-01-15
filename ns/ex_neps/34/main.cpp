#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,k; cin >> n >> k;
	vector<int> a(n);
	for(int i =0 ; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end(), greater<int>());

	int last = a[k-1];
	int ans = k;
	
	for(int i = k; i < n; i++){
		if(a[i]==last) ans++;
		else {
			break;
		}
	}
	cout << ans << "\n";

	return 0;
}

