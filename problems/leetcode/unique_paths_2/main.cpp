#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int obstacleGrid[105][105];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cin >> obstacleGrid[i][j];
	}

	if(obstacleGrid[n-1][m-1] == 1 || obstacleGrid[0][0]==1){
		cout << "0\n";
		return 0;
	}

	int dp[105][105]={0};

	for(int i = 0; i < n; i++) dp[i][m-1]=1;
	for(int i = 0; i < m; i++) dp[n-1][i]=1;

	for(int i = 0; i <n ; i++){
		for(int j =0 ; j < m; j++){
			if(obstacleGrid[i][j]==1)dp[i][j]=0;
		}
	}
	
	for(int i = n-2; i >= 0; i--){
		for(int j = m-2; j >= 0; j--){
			if(obstacleGrid[i][j]==1) dp[i][j]=0;
			else dp[i][j]=dp[i+1][j]+dp[i][j+1];
		}
	}

	cout << dp[0][0] << "\n";

	return 0;
}
