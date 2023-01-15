#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define MOD 1000000007

using namespace std;

ll dp[10005];

ll solve(ll n){
	if(n<0)return 0;
	if(n <= 2 || dp[n]!=0 ) return dp[n];
	
	dp[n]=((solve(n-1)%MOD)+(solve(n-2)%MOD*4)%MOD+(solve(n-3)%MOD*2));
	
	return dp[n];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n; cin >> n;
	
	dp[0]=1;
	dp[1]=1;
	dp[2]=5;
	cout << solve(n)%1000000007 << "\n";

	return 0;
}
