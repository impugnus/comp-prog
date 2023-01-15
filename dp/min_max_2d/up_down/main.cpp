#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int t[MAXN][MAXN], dp[MAXN][MAXN];
int dy[]={-1, 0, 1};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++) cin >> t[i][j];
	}
	
	for(int i = 1; i <= m; i++) dp[n][i]=t[n][i];
	
	for(int i = n-1; i >= 1; i--){
		for(int j = 1; j <= m; j++){
			int mn = 1e8;
			for(int z = 0; z < 3; z++){
				int I=i+1;
				int J=j+dy[z];
				if(I>=1 && I <= n && J>=1 && J<=m){
					if(dp[I][J]<mn)mn=dp[I][J];
				}
			}
			
			dp[i][j]=t[i][j]+mn;
		}
	}

	int res = INT_MAX;
	for(int i =1; i <= n; i++) res=min(res, dp[1][i]);
	cout << res << "\n";

	return 0;
}

/*
3 4
5 1 2 6
9 9 7 5
3 1 4 8
*/
