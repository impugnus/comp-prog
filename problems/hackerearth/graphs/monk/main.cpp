#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

int N, M, mn;

bool visited[MAXN];
int dist[MAXN];
vector<int> g[MAXN];

void bfs(int node){
	visited[node]=1;
	dist[node]=0;
	queue<int> q;
	q.push(node);
	
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		
		for(auto e : g[curr]){
			if(!visited[e]){
				q.push(e);
				dist[e]=dist[curr]+1;
				visited[e]=1;
			}
		}
	}
}

void test_case(){
	cin >> N >> M;
	for(int i = 1; i <= N; i++) g[i].clear(), visited[i]=0;
	
	for(int i = 0 ; i< M; i++){
		int u,v; cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	bfs(1);
	
	cout << dist[N] << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
