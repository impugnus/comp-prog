#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

typedef pair<int, int> pii;

const int maxn=1e5+10;
const int inf=1e9+10;

// (N,E)
int n,m;

int dist[maxn];
bool mark[maxn];

// (N,W)
vector<pii> grafo[maxn];

void dijkstra(int S){
	for(int i = 1; i <= n; i++)dist[i]=inf;
	
	dist[S]=0;
	
	priority_queue<pii, vector<pii>, greater<pii>> fila;
	fila.push({0,S});
	
	while(!fila.empty()){
		int u = fila.top().second;
		
		if(mark[u]) continue;
		
		mark[u]=1;
		
		for(auto V : grafo[u]){
			int v = V.first, w = V.second;
			
			if(dist[v] > dist[u]+w){
				dist[v]=dist[u]+w;
				fila.push({dist[V], v});
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	return 0;
}
