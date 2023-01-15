#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> coins = {1,3,4,5};
	int amount = 7;
	
	int dp[amount+1];
	for(int i = 1; i < amount; i++) dp[i]=amount+1;
	
	dp[0]=0;
	
	for(int i = 1; i < amount+1; i++){
		for(int j = 0; j < (int)coins.size(); j++){
			if(i-coins[j]>=0){
				dp[i]=min(dp[i], dp[i-coins[j]]+1);
			}
		}
	}
	
	cout << dp[amount] << endl;

	return 0;
}
