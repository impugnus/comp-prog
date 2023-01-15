#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int n, s, ans, w[MAXN], v[MAXN];

void backtracking(int i, int sum_weight, int sum_val){
	if(i==n+1){
		ans=max(ans, sum_val);
		return;
	}
	
	// Nao incluir item i
	backtracking(i+1, sum_weight, sum_val);
	
	// Incluir o item i
	if(sum_weight+w[i]<=s) backtracking(i+1,sum_weight+w[i],sum_val+v[i]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> s;
	for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];

	backtracking(1, 0, 0);
	
	cout << ans << "\n";

	return 0;
}
