#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

vector<int> g[MAXN];
int visited[MAXN], dist[MAXN];

void dfs(int n, int d){
	if(!visited[n]) visited[n]=1;
	dist[n]=d;
	for(auto e : g[n]){
		if(!visited[e]) dfs(e,d+1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	g[1].pb(2);
	g[2].pb(3);
	g[2].pb(4);
	g[4].pb(5);
	g[4].pb(6);
	
	
	dfs(2, 0);

	for(int i = 1; i <= 6; i++) cout << dist[i] << " ";
	cout << endl;

	return 0;
}
