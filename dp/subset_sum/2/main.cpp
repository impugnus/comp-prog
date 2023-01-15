#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a[100], n, m;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	bool dp[m+1]={0};
	dp[0]=1;
	
	for(int i = 1;i <= n; i++){
		int curr = a[i];
		for(int j = m; j >= curr; j--){
			if(dp[j] || dp[j-curr]==0) continue;
			else dp[j]=1;
		}
	}
	
	for(int i = 0; i <= m; i++){
		cout << dp[i] << " ";
	}

	return 0;
}
