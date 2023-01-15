#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int N, Q;

bool visited[MAXN];
vector<int> g[MAXN];

int res;

void bfs(int node, int level){
	queue<int> q;
	q.push(node);
	visited[node]=1;
	
	int cnt = 0;
	while(!q.empty()){
		int len = q.size();
		if(cnt==level){
			res=len;
			return;
		}
		
		for(int i = 0; i < len; i++){
			int curr = q.front();
			q.pop();
			
			for(auto e : g[curr]){
				if(!visited[e]){
					visited[e]=1;
					q.push(e);
				}
			}
		}
		cnt++;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> Q;
	for(int i = 0; i < Q; i++){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	cin >> Q;
	while(Q--){
		int a,b; cin >> a >> b;
		for(int i = 0; i <= N; i++) visited[i]=0;
		res=0;
		bfs(a, b);
		cout << res << "\n";
	}

	return 0;
}
/*

9 10
1 7
1 2
2 3
2 4
3 4
4 7
5 6
6 7
9 7
8 7
2
7 1
5 2

Out:
* 5
* 1
*/
