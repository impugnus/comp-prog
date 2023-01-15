#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 1005

using namespace std;

int dp[MAXN][MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n1, n2; cin >> n1 >> n2;
	
	vector<int> s1(n1), s2(n2);
	for(int i = 0; i < n1; i++) cin >> s1[i];
	for(int i = 0; i < n2; i++) cin >> s2[i];
	
	for(int i = 1; i <= n1; i++){
		for(int j = 1; j <= n2; j++){
			if(s1[i-1]!=s2[j-1]) dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
			else dp[i][j]=dp[i-1][j-1]+1;
		}
	}
	
	cout << n1-dp[n1][n2] << " " << n2-dp[n1][n2] << "\n";
	
	return 0;
}
