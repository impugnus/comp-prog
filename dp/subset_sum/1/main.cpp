#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	vector<int> a(n+1);
	
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	bool dp[n+1][m+1];
	dp[0][0]=1;
	for(int i = 1; i <= m; i++) dp[0][i]=0;
	
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= m; j++){
			if(j<a[i]) dp[i][j]=dp[i-1][j];
			else {
				int need = j-a[i];
				if(dp[i-1][j]==1 || dp[i-1][need]==1) dp[i][j]=1;
				else dp[i][j]=0;
			}
		}
	}
	
	bool ans = dp[n][m];
	
	cout << (ans ? "YES\n" : "NO\n");

	return 0;
}
