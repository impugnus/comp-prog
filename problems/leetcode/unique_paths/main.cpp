#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

ll dp[MAXN][MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;

	for(int i = 1; i <= n; i++) dp[i][m]=1;
	for(int i = 1; i <= m; i++) dp[n][i]=1;
	
	for(int i = n-1; i >= 1; i--){
		for(int j = m-1; j >= 1; j--){
			dp[i][j]=dp[i+1][j]+dp[i][j+1];
		}
	}
	
	cout << dp[1][1] << "\n";
	
	return 0;
}
