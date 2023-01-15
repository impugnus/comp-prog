#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int n,q;
vector<int> g[MAXN];
int col[MAXN];

bool is_bipartite_graph(int v, int c){
	col[v]=c;
	
	for(auto e : g[v]){
		if(col[e]==-1){
			if(is_bipartite_graph(e, c^1)==false) return false;
		} else {
			if(col[v]==col[e]) return false;
		}
	}
	
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> q;
	
	for(int i = 0; i <= n; i++) col[i]=-1;
	
	for(int i = 0; i < q; i++){
		int u,v; cin >> u>> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	cout << (is_bipartite_graph(1,0) ? "YES\n" : "NO\n");

	return 0;
}
