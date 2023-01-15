#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 5005

using namespace std;


int n,m, ans;
vector<int> g[MAXN];
bool visited[MAXN];

void dfs(int node){
	visited[node]=1;
	for(int i = 0; i < (int)g[node].size(); i++){
		if(!visited[g[node][i]]) dfs(g[node][i]);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for(int i =0 ; i < m; i++){
		int a,b; cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}
	
	for(int i = 1; i <= n; i++){
		if(!visited[i]) dfs(i), ans++;
	}
	
	cout << ans << "\n";

	return 0;
}
