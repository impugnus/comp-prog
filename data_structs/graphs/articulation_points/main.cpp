#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105
#define IS_CUTPOINT(x) art_points.pb((x));

using namespace std;

int in[MAXN], low[MAXN], N, M, timer;
vector<int> g[MAXN], art_points;
bool visited[MAXN];


void dfs(int v, int p = -1) {
    visited[v] = true;
    in[v] = low[v] = timer++;
    int children=0;
    for (int to : g[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], in[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] >= in[v] && p!=-1)
                IS_CUTPOINT(v);
            ++children;
        }
    }
    if(p == -1 && children > 1)
        IS_CUTPOINT(v);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	for(int i = 0; i < M; ++i){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	for(int i = 1; i <= N; ++i) if(!visited[i]) dfs(i);
	
	for(auto e : art_points) cout << e << " ";
	cout << endl;
	
	return 0;
}
