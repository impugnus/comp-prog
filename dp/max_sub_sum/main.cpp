#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 10005

using namespace std;

int ar[MAXN], dp[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for(int i = 0; i < n; i++) cin >> ar[i];
	
	dp[0]=ar[0];
	for(int i = 1; i < n; i++) dp[i]=max(dp[i-1], 0) + ar[i];
	
	cout << *max_element(dp, dp+n) << "\n";

	return 0;
}
