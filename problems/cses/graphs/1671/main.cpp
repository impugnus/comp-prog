#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

typedef pair<ll, ll> pii;

ll n, q, a, b, c;
vector<pii> g[MAXN];
ll dist[MAXN];
bool visited[MAXN];

const ll inf = LLONG_MAX;

void f(int node){
	priority_queue<pii, vector<pii>, greater<pii>> pq;
	pq.push({0, node});
	dist[node]=0;
	
	while(!pq.empty()){
		ll curr = pq.top().second;
		ll curr_d = pq.top().first;
		pq.pop();
		
		if(visited[curr]) continue;
		visited[curr]=1;
		
		for(pii edge : g[curr]){
			if(curr_d+edge.second < dist[edge.first]){
				dist[edge.first]=curr_d+edge.second;
				pq.push({dist[edge.first], edge.first});
			}
		}
		
		
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> q;
	for(ll i = 0; i < q; i++){
		cin >> a >> b >> c;
		g[a].pb({b,c});
	}
	for(ll i = 1; i <= n; i++) dist[i]=inf;

	f(1);
	
	for(ll i = 1; i <= n; i++) cout << dist[i] << " ";
	cout << "\n";

	return 0;
}
