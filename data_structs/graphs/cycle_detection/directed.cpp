#include <bits/stdc++.h>

#define pb push_back

#define MAXN 105

using namespace std;

int N,Q;
vector<int> g[MAXN];
int visited[MAXN];

enum status {NOT_VISITED=0, UNDER_PROCESS=1, COMPLETED=2};

bool dfs(int node){
	visited[node]=UNDER_PROCESS;
	
	for(auto e : g[node]){
		if(visited[e]==NOT_VISITED){
			if(dfs(e)==true) return true; // has a cycle
		} else if(visited[e]==UNDER_PROCESS) return true;
	}
	
	visited[node]=COMPLETED;
	return false;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> N >> Q;
	for(int i = 0; i < N; i++){
		int a,b; cin >> a >> b;
		g[a].pb(b);
	}
	
	cout << "Cycle Status: " << dfs(1);
	
	return 0;
}
