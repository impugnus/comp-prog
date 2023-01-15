#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

const int inf = 1e9;

int t[MAXN][MAXN], dp[MAXN][MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++) cin >> t[i][j];
	}
	
	for(int i = 1; i <= m+1; i++) dp[n+1][i]=inf;
	for(int i = 1; i <= n+1; i++) dp[i][m+1]=inf;
	
	dp[n+1][m]=dp[n][m+1]=0;

	for(int i = n; i >= 1; i--){
		for(int j = m; j >= 1; j--){
			dp[i][j]=t[i][j]+min(dp[i][j+1], dp[i+1][j]);
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++) cout << dp[i][j] << " ";
		cout << "\n";
	}

	return 0;
}
