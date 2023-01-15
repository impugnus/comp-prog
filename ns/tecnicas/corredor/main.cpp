#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 50005

using namespace std;

int dp[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(n);
	for(int i =0 ; i < n; i++) cin >> a[i];

	dp[0]=a[0];
	
	for(int i = 1; i < n; i++) dp[i]=max(a[i], dp[i-1]+a[i]);
	
	int ans = INT_MIN;
	for(int i = 0; i < n; i++) ans=max(ans, dp[i]);
	cout << ans << "\n";

	return 0;
}
