#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

const int INF = 10010000;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	int dp[n+1];
	dp[0]=-INF;
	
	for(int i = 1; i < n; i++) dp[i]=INF;
	
	for(int i = 0; i < n; i++){
		int p = lower_bound(dp, dp+n+1, a[i])-dp;
		dp[p]=a[i];
	}

	return 0;
}
