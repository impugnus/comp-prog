#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

int N, M;

bool visited[MAXN];
vector<int> g[MAXN];

int last_reached = 1;

void dfs(int node){
	visited[node]=1;
	
	for(auto e : g[node]){
		if(!visited[e]) last_reached=e, dfs(e);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	
	for(int i = 0; i < M; i++){
		int u, v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}

	vector<pair<int, int>> v;
	for(int i =  1; i <= N; i++){
		if(!visited[i]){
			if(last_reached!=-1 && last_reached != i)v.pb(make_pair(last_reached, i));
			dfs(i);
		}
	}
	
	cout << v.size() << "\n";
	for(auto e : v) cout << e.first << " " << e.second << "\n";
	
	return 0;
}
