#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	vector<int> a(n);
	for(int i =0 ; i < n; i++) cin>>a[i];
	
	int ans = 0, diff=0;
	
	for(int i= 0; i < n-1; i++){
		diff=m-a[i];
		ans+=abs(diff);
		a[i+1]+=diff;
	}
	
	cout << ans << "\n";

	return 0;
}
