#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

typedef pair<int, int> pii; 

const int inf = 1e9+5;

vector<pii> g[MAXN];
int dist[MAXN];
bool mark[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	for(int i = 0; i <= n; i++) dist[i]=inf;
	
	for(int i = 0; i < m; i++){
		int a,b, w; cin >> a >> b >> w;
		g[a].pb({b,w});
		g[b].pb({a,w});
	}
	
	priority_queue<pii, vector<pii>, greater<pii>> pq;
	pq.push({0, 1});
	dist[1]=0;
	
	while(!pq.empty()){
		int curr = pq.top().second;
		int curr_d = pq.top().first;
		pq.pop();
		
		if(mark[curr]) continue;
		mark[curr]=1;
		
		for(pii edge : g[curr]){
			if(mark)
			if(curr_d+edge.second < dist[edge.first]){
				dist[edge.first]=curr_d+edge.second;
				pq.push({dist[edge.first], edge.first});
			}
		}
	}
	
	for(int i = 1; i <= n; i++) cout << dist[i] << " ";
	cout << "\n";

	return 0;
}
/*
6 9
1 2 4
1 6 2
6 2 1
2 3 5
6 3 8
6 5 10
5 4 5
5 3 3
3 4 6
*/
