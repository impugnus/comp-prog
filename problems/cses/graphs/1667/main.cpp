#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

int N, M, a, b;
vector<int> g[MAXN];
bool visited[MAXN];
int dist[MAXN], pred[MAXN];

bool bfs(int node){
	queue<int> q;
	q.push(node);
	
	
	for(int i = 0; i <= N; i++) visited[i]=false,dist[i]=INT_MAX,pred[i]=-1;
	visited[node]=1;
	dist[node]=0;
	
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		
		for(auto e : g[curr]){
			if(!visited[e]){
				visited[e]=true;
				dist[e]=dist[curr]+1;
				pred[e]=curr;
				q.push(e);
				
				if(e==N) return true;
			}
		}
	}
	
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> N >> M;
	for(int i = 0; i < M; i++){
		cin >> a>>b;
		g[a].pb(b);
		g[b].pb(a);
	}
	
	if(!bfs(1)){
		cout << "IMPOSSIBLE\n";
		return 0;
	}
	
	vector<int> path;
	int crawl = N;
	while(crawl!=-1){
		path.pb(crawl);
		crawl=pred[crawl];
	}
	reverse(path.begin(), path.end());
	cout << ++dist[N] << "\n";
	for(auto e : path) cout << e << " ";
	cout << "\n";

	return 0;
}
