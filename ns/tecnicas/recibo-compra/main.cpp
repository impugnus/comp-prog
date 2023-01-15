#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int dp[110][22][110];
int r, k;

int solve(int value, int quant, int smaller){
	if(dp[value][quant][smaller]!= -1) return dp[value][quant][smaller];
	
	if(value==0){
		if(quant==0) return dp[value][quant][smaller]=1;
		else return dp[value][quant][smaller]=0;
	} else if(quant==0){
		return dp[value][quant][smaller] = 0;
	}
	
	dp[value][quant][smaller]=0;
	
	for(int i = 1; i < min(value+1, smaller); i++) dp[value][quant][smaller]+=solve(value-i, quant-1, i);

	return dp[value][quant][smaller];
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> r >> k;
	memset(dp, -1, sizeof(dp));
	
	cout << solve(r, k, r+1) << "\n";

	return 0;
}
