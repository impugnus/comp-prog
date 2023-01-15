#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

int in[MAXN], low[MAXN], N, M, timer;
set<int> art;
bool visited[MAXN];
vector<int> g[MAXN];

void dfs(int node, int par){
	visited[node]=1;
	in[node]=low[node]=timer++;
	
	int subtrees = 0;
	for(auto e : g[node]){
		if(e==par) continue;
		
		if(visited[e]){
			// Back edge
			low[node]=min(low[node], in[e]);
		} else {
			dfs(e, node);
			low[node]=min(low[node], low[e]);
			
			if(par!=-1 && low[e]>=in[node]) art.insert(node);
			subtrees++;
		}
	}
	
	if(par==-1 && subtrees>1) art.insert(node);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	while(N != 0 && M != 0){
		
		for(int i = 1; i <= N; i++) visited[i]=0, low[i]=-1, in[i]=-1, g[i].clear(), art.clear();
		for(int i = 0; i < M; i++){
			int u,v; cin >> u>> v;
			g[u].pb(v);
			g[v].pb(u);
		}
		
		dfs(1, -1);
		
		cout << art.size() << "\n";
		
		cin >> N >> M;
	}

	return 0;
}
