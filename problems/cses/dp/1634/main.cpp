#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

const int inf = 1e8;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	int dp[m+1];
	for(int i = 1; i <=m ; i++) dp[i]=inf;
	dp[0]=0;
	
	for(int i = 1; i <= m; i++){
		for(int j = 0; j < n; j++){
			if(i-a[j]>=0) dp[i]=min(dp[i], dp[i-a[j]]+1);
		}
	}
	
	cout << (dp[m]==inf ? -1 : dp[m]) << "\n"; 

	return 0;
}
