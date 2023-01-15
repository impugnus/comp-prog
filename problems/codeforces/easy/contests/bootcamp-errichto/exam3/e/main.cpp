#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

#define MAXN 1005

bool mark[MAXN];
ll dp[MAXN];

ll cnt(ll n) {
	if(n == 0) {
		return 1;
	}
	
	if(mark[n]==1)return dp[n];
	
	mark[n]=1;
	dp[n]=cnt(n-1)+cnt(n/2)+cnt(n/3);
	
	return dp[n];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 0; cin>>n;
	cout << cnt(n) << "\n";
	return 0;
}
