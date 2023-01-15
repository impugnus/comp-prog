#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

#define MAXN 10005

int N, max_distance, max_node;

bool visited[MAXN];
vector<int> g[MAXN];

void dfs(int node, int d){
	visited[node]=1;
	
	if(d>max_distance) max_distance=d, max_node=node;
	
	for(auto e : g[node]){
		if(!visited[e]){
			dfs(e, d+1);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;
	for(int i = 0; i < N-1; i++){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	max_distance=-1;
	
	dfs(1, 0);
	
	for(int i = 1; i <= N; i++) visited[i]=0;
	dfs(max_node, 0);
	

	cout << max_distance << "\n";

	return 0;
}
