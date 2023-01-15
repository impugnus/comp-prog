#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int N, M, timer;

int in[MAXN], low[MAXN];
bool visited[MAXN];
vector<int> g[MAXN];

void dfs(int node, int par){
	visited[node]=1;
	in[node]=low[node]=timer++;
	
	for(auto e : g[node]){
		if(e==par) continue;
		
		if(visited[e]){
			// Back edge -- cannot be a bridge
			low[node] = min(low[node], in[e]);
		} else {
			dfs(e, node);
			
			if(low[e]>in[node]){
				cout << node << " -> " << e << " [BRIDGE]\n";
			}
			
			low[node]=min(low[node], low[e]);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	for(int i = 0 ; i < M; ++i){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	dfs(1,-1);

	return 0;
}
