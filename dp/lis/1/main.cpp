#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

const int INF = 1000000010;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	int dp[n+1];
	dp[0]=-INF;

	for(int i = 1; i < n; i++) dp[i]=INF;
	
	for(int i =0 ; i < n; i++){
		for(int j = 1; j <= n; j++){
			if(dp[j-1]<a[i]){
				dp[j]=min(dp[j], a[i]);
			}
		}
	}
	
	int ans = 0;
	for(int i = 1; i <= n; i++){
		if(dp[i]<INF) ans=i;
	}
	
	cout << ans << "\n";

	return 0;
}
