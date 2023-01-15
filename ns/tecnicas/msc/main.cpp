#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 1010

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;
	int dp[MAXN][MAXN];
	int A[MAXN], B[MAXN];
	
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> A[i];
	for(int i = 0; i < m; i++) cin >> B[i];
	
	for(int i = 1; i <= n; i++){
		for(int j= 1; j <= m; j++){
			if(A[i-1]!=B[j-1]) dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
			else dp[i][j]=dp[i-1][j-1]+1;
		}
	}
	
	cout <<  "Size: " << dp[n][m] << "\n";
	vector<int> msc;
	
	int I = n, J = m;
	while(I!=0 && J!=0){
		if(A[I-1]==B[J-1]){
			msc.pb(A[I-1]);
			I--,J--;
		} else {
			if(dp[I-1][J] > dp[I][J-1]) I--;
			else J--;
		}
	}
	
	reverse(msc.begin(), msc.end());
	for(int i = 0; i < (int)msc.size(); i++) cout << msc[i] << " ";
	cout << endl;


	return 0;
}
