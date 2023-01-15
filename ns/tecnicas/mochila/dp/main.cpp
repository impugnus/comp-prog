#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

const int MAXN = 1010;
const int MAXS = 1010;
const int INF = 1000000010;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,S;
	int w[MAXN], v[MAXN], dp[MAXN][MAXS]; // dp[i][s] = soma máxima dos valores dos itens utilizando apenas os primeiros i itens e que o seu peso total seja s.
	
	cin >> n >> S;
	
	for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];
	
	dp[0][0]=0;
	
	for(int i = 1; i <= S; i++) dp[0][i] = -INF;
	
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= S; j++){
			if(w[i]>j) // Nao podemos pegar o item i
				dp[i][j]=dp[i-1][j];
			else // Escolhemos entre pegar ou nao
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
		}
	}
	
	int ans = 0;
	for(int i = 1; i <= S; i++) ans=max(ans,dp[n][i]);
	
	cout << ans << "\n";
	
	return 0;
}
