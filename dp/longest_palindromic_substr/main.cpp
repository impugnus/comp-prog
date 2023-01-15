#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

char s[MAXN];
int dp[MAXN][MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for(int i = 0; i <n ;i++) cin >> s[i];
	
	for(int i = 0; i <=n;i++) dp[0][i]=dp[1][i]=1;
	
	for(int i = 2; i <= n; i++){
		for(int j = i; j <= n; j++){
			if(s[j]==s[j-i+1] && dp[i-2][j-1] == 1) dp[i][j]=1;
			else dp[i][j]=0;
		}
	}

	for(int i = 0; i <= n; i++){
		for(int j = 0; j<= n; j++) cout << dp[i][j] << " ";
		cout << "\n";
	}

	return 0;
}
