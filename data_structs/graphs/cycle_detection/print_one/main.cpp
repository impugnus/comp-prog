#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int N, M;
bool visited[MAXN];
vector<int> temp, g[MAXN];

bool dfs(int node, int par){
	visited[node]=1;
	temp.pb(node);
	
	for(auto e : g[node]){
		if(!visited[e]){
			if(dfs(e, node)) return true;
		} else if(e!=par){
			temp.pb(e);
			return true;
		}
	}
	
	temp.pop_back();
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	for(int i = 0; i < M; i++){
		int u,v; cin >> u>> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	dfs(1, -1);
	int last = temp[temp.size()-1];
	int curr = (int)temp.size()-2;
	
	while(curr!=last){
		cout << temp[curr] << " ";
		curr--;
	}
	

	return 0;
}

/*
5 5
5 1
1 4
2 3
4 3
5 2
*/
