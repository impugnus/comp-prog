#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int N, M, timer, SCC, in[MAXN], low[MAXN];
bool visited[MAXN], onStack[MAXN];
vector<int> g[MAXN];
stack<int> st;

void dfs(int node){
	visited[node]=true;
	in[node]=low[node]=timer++;
	
	onStack[node]=true;
	st.push(node);
	
	for(auto e : g[node]){
		if(visited[e]==true && onStack[e]==true) low[node]=min(low[node], in[e]);
		else if(!visited[e]){
			dfs(e);
			
			if(onStack[e]) low[node]=min(low[node], low[e]);
		}
	}
	
	if(in[node]==low[node]){
		SCC++;
		cout << "SCC #" << SCC << endl;
		
		int u;
		while(1){
			u = st.top();
			st.pop(), onStack[u]=false;
			cout << u << " ";
			if(u == node) break;
		}
		
		cout << endl;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	for(int i = 0; i < M; i++){
		int u,v; cin >> u >> v;
		g[u].pb(v);
	}
	
	for(int i = 1; i <= N; i++) onStack[i]=false, visited[i]=false;
	
	for(int i = 1; i <= N; i++){
		if(!visited[i]) dfs(i);
	}

	return 0;
}

/*
8 12
1 2
2 3
3 1
2 8
3 4
8 4
4 8
7 8
5 4
5 7
7 6
6 5
*/
