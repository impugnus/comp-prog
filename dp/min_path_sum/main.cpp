#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

const int inf = 1e9+10;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	int t[n][m]={0};
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> t[i][j];
	
	int res[n+1][m+1]={0};
	
	for(int i = 0; i < n+1; i++) res[i][m]=inf;
	for(int j = 0; j < m+1; j++) res[n][j]=inf;
 	res[n][m-1]=0;
	
	for(int i = n-1; i >= 0; i--){
		for(int j = m-1; j >= 0; j--){
			res[i][j] = t[i][j] + min(res[i+1][j], res[i][j+1]);
		}
	}

	cout << res[0][0] - t[n-1][m-1] << "\n";
	
	return 0;
}

/*
3 4
3 2 1 3
1 9 2 3
9 1 5 4
*/
