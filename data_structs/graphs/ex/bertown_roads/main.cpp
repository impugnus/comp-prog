#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

int N, M;

bool visited[MAXN], hasBridges;
int in[MAXN], low[MAXN], timer;
vector<int> g[MAXN];
vector<pair<int, int>> edge_list;

void dfs(int node, int par){
	visited[node]=1;
	in[node]=low[node]=timer++;
	
	for(auto e : g[node]){
		if(e==par) continue;
		
		if(visited[e]){
			// Back edge
			low[node]=min(low[node], in[e]);
			
			if(in[node] > in[e]) edge_list.pb({node, e});
		} else {
			dfs(e, node);
			
			if(low[e]>in[node]){
				hasBridges=true;
				break;
			}
			
			edge_list.pb({node, e});
			low[node]=min(low[node], low[e]);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	for(int i = 0; i < M; ++i){
		int u,v; cin >> u>> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	dfs(1, -1);
	if(hasBridges) cout << "0\n";
	else {
		for(auto e : edge_list) cout << e.first << " " << e.second << "\n";
	}

	return 0;
}
