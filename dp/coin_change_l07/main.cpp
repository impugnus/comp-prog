#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

const int inf = 1e8;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	vector<int> coins(l);
	for(int i = 0; i < l; i++) cin >> coins[i];
	
	int amount; cin >> amount;
	
	int dp[amount+1];
	for(int i = 0; i <= amount; i++)dp[i]=inf;
	dp[0]=0;
	
	for(int i = 1; i <= amount; i++){
		int ans = inf;
		for(int j = 0; j < (int)coins.size(); j++){
			if(coins[j]<=i) ans=min(ans, dp[i-coins[j]]);
		}
		
		if(ans!=inf) dp[i]=ans+1;
	}
	
	cout << (dp[amount]==inf ? -1 : dp[amount]) << "\n";

	return 0;
}
