#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

vector<int> g[MAXN];
bool visited[MAXN];
int n,q;

void dfs(int v){
	visited[v]=1;
	for(auto e : g[v]){
		if(!visited[e]) dfs(e);
	}
}

bool verify(){
	int c =0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]) dfs(i),c++;
	}
	
	return (c==1 && q==n-1);
	// If it has no cycle and is connected
	// If it had n edges it would have a cycle
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> q;
	for(int i = 0; i < q; i++){
		int u,v; cin >>u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	cout << (verify() ? "YES\n" : "NO\n");

	return 0;
}
