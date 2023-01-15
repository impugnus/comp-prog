#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int N,M;
vector<int> g[MAXN], transposed[MAXN], order, scc;
bool visited[MAXN];

void dfs(int node){
	visited[node]=1;
	
	for(auto e : g[node]){
		if(!visited[e]) dfs(e);
	}
	
	order.pb(node);
}

void dfs1(int node){
	visited[node]=1;
	
	for(auto e : transposed[node]){
		if(!visited[e]) dfs1(e);
	}
	
	scc.pb(node);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	for(int i = 0; i < M; ++i){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		transposed[v].pb(u);
	}
	
	for(int i = 1; i<= N; ++i){
		if(!visited[i]) dfs(i);
	}
	
	for(int i = 1; i <= N; ++i) visited[i]=0;
	
	for(int i = 1; i <= N; ++i){
		if(!visited[order[N-i]]){
			scc.clear();
			dfs1(order[N-i]);
			
			cout << "DFS1() called from: " << order[N-i] << "\n";
			for(auto e : scc) cout << e << " ";
			cout << "\n";
		}
	}

	return 0;
}

/*
7 8
1 2
2 3
3 1
4 3
7 4
7 5
5 6
6 7
*/
