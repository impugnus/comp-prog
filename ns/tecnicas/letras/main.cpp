#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

const int INF = 10001000;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string st; cin >> st;
	int len = (int)st.size();

	int dp[len+1];
	dp[0]=-INF;
	
	for(int i = 1; i <= len; i++) dp[i]=INF;
	
	for(int i = 0; i < len; i++){
		int p = upper_bound(dp, dp+len+1, st[i]-'A')-dp;
		dp[p]=st[i]-'A';
	}
	
	int ans = 0;
	for(int i = 1; i <= len; i++){
		if(dp[i]<INF) ans=i;
	}
	
	cout << ans << "\n";

	return 0;
}
