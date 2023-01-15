#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

#define MAXN 100005

int N, M;

vector<int> g[MAXN];
bool visited[MAXN];
int cc_size;

void dfs(int node){
	visited[node]=1;
	cc_size++;
	
	for(auto e : g[node]){
		if(!visited[e]) dfs(e);
	}
}

void test_case(){
	cin >> N >> M;
	
	for(int i = 1; i <= N; i++) g[i].clear(),visited[i]=0;
	
	for(int i = 0; i < M; i++){
		int a,b; cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}
	
	int cnt = 0;
	ll res = 1;
	for(int i = 1; i <= N; i++){
		if(!visited[i]){
			cc_size=0;
			dfs(i),cnt++;
			res=(res*cc_size)%10000000;
		}
	}
	
	cout << cnt << " " << res << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
