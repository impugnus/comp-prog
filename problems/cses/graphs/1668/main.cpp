#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

int N, M, a, b, co;
vector<int> g[MAXN];
bool visited[MAXN];
int col[MAXN];

bool dfs(int node, int c){
	visited[node]=1;
	col[node]=c;
	
	for(int e : g[node]){
		visited[e]=1;
		if(col[e]==-1){
			if(dfs(e, c^1)==false) return false;
		} else if(col[node]==col[e]) return false;
	}
	
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	for(int i = 1; i <= N; i++)col[i]=-1;
	
	for(int i = 0; i < M ; i++){
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}
	
	bool ok = true;
	for(int i = 1; i <= N; i++){
		if(!visited[i]){
			if(dfs(i, 0)==false){
				ok=false;
				break;
			}
		};
	}
	if(!ok) cout << "IMPOSSIBLE\n";
	else {
		for(int i = 1;  i <= N; i++){
			cout << col[i]+1 << " ";
		}
		cout << "\n";
	}
	
	
	return 0;
}
