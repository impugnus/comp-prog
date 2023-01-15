#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 35

using namespace std;

int dp[MAXN];

int solve(int n){
	if(dp[n]!=0) return dp[n];
	
	if(n==1 || n==2) return 1;
	
	dp[n] = solve(n-1) + solve(n-2);
	return dp[n];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n; n++;
	
	cout << solve(n) << "\n";

	return 0;
}
