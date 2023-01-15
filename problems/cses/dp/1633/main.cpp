#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define MOD 1000000007

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> dp(n+1, 0);
	dp[0]=1;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 6 && i-j>=0; j++)(dp[i]+=dp[i-j])%=mod;
	}
	
	cout << dp[n] << "\n";

	return 0;
}
