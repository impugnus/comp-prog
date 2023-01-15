#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 1005

using namespace std;

int dp[MAXN][MAXN];

int solve(string s1, string s2){
	int len1 = (int)s1.size();
	int len2 = (int)s2.size();
	
	for(int i = 0; i <= len1; i++) dp[i][0]=i;
	for(int j = 0; j <= len2; j++) dp[0][j]=j;
	
	for(int i = 1; i <= len1; i++){
		for(int j = 1; j <= len2; j++){
			dp[i][j]=min(min(1+dp[i-1][j], 1+dp[i][j-1]), dp[i-1][j-1]+((s1[i]==s2[j]) ? 0 : 1));
		}
	}

  return dp[len1][len2]<=2;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int nd, np; cin >> nd >> np;
	vector<string> dic(nd), pa(np);
	
	for(int i = 0; i < nd; i++) cin >> dic[i];
	for(int i = 0; i < np; i++) cin >> pa[i];
	
	for(int i = 0; i < np; i++){
		for(int j = 0; j < nd; j++){
			if(solve(pa[i], dic[j])) cout << dic[j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
