#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

#define MAXN 105

int N, M;
bool visited[MAXN];
vector<int> g[MAXN];
int subSize[MAXN];

int dfs(int node){
	visited[node]=1;
	int curr_size=1;
	
	for(auto e : g[node]){
		if(!visited[e]) curr_size+=dfs(e);
	}
	
	subSize[node]=curr_size;
	return curr_size;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	for(int i = 0; i < M; i++){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	dfs(1);
	
	for(int i = 1; i <= N; i++){
		cout << "Subtree of " << i << ": " << subSize[i] << "\n";
	}
	

	return 0;
}
