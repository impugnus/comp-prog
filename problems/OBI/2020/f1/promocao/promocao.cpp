#include <bits/stdc++.h>

#define pb push_back

#define MAXN 100005

using namespace std;

vector<int> g[MAXN];
int weight[MAXN];


int dfs(int v){
	if(g[v].size()==0) return weight[v]=1;
	
	int cnt = 1;
	for(auto u : g[v]){
		cnt+=dfs(u);
	}
	
	return weight[v]=cnt;
}

bool is_bal(int v){
	if(g[v].size()==0) return true;
	
	int curr = weight[g[v][0]];
	for(auto u : g[v]){
		if(curr!=weight[u] || !is_bal(u)) return false;
	}
	
	return true;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int a,b; cin >> a >> b;
		g[b].pb(a);
	}
	
	dfs(0);
	
	if(is_bal(0)) cout << "bem\n";
	else cout << "mal\n";
	
	return 0;
}
