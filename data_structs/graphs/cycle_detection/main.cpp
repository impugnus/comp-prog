#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int N, Q;
vector<int> g[MAXN];
int visited[MAXN];

bool dfs(int node, int parent){
	visited[node]=1;
	
	for(auto e : g[node]){
		if(!visited[node]){
			if(dfs(e, node) == true) return true;
		} else if(parent!=e) return true;
	}
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> Q;
	while(Q--){
		int u,v;cin>>u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	cout << (dfs(1, -1) ? "YES\n" : "NO\n");

	return 0;
}
