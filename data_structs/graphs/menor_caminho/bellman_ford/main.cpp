#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

const int inf = 1e9+5;

struct edge{
	int a,b,cost;
};


int N, M, V;
vector<edge> g(MAXN);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M >> V;
	vector<int> dist(N, inf);
	dist[V]=0;

	for(int i = 0; i < M; i++){
		cin >> g[i].a >> g[i].b >> g[i].cost;
	}
	
	for(int i = 0; i <N-1; i++){
		for(int j = 0; j < M; j++){
			if(dist[g[j].a] < inf){
				dist[g[j].b] = min(dist[g[j].b], dist[g[j].a] + g[j].cost);
			}
		}
	}

	for(int i = 0; i < M; i++) cout << dist[i] << " ";
	cout << endl;

	return 0;
}
