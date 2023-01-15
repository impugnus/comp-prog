#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

const int maxn = 1e5+5;

int n,e;
int visited[maxn];

vector<int> g[maxn];

void dfs(int i){
	visited[i]=1;
	
	for(auto v : g[i]){
		if(!visited[v]) dfs(v);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> e;
	for(int i =0 ; i < e; i++){
		int u,v; cin >> u >> v;
		
		g[u].pb(v);
		g[v].pb(u);
	}
	
	int cnt = 0;
	
	for(int i = 1; i <= n; i++){
		if(!visited[i]) dfs(i),cnt++;
	}
	
	cout << cnt << "\n";

	return 0;
}
