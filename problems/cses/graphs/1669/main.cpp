#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

int N, M, a, b;
vector<int> g[MAXN], temp;
bool visited[MAXN];

bool dfs(int node, int par){
	visited[node]=1;
	temp.pb(node);
	
	for(int e : g[node]){
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
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}
	
	bool ok = false;
	for(int i = 1; i <= N; i++){
		if(!visited[i] && dfs(i, -1)){
			ok=true;
			break;
		}
	}
	

	if(ok){
		int len = (int)temp.size();
		int last = temp[len-1];
		int curr = len-2;
		vector<int> ans;
		
		ans.pb(last);
		while(temp[curr]!=last) ans.pb(temp[curr--]);
		ans.pb(temp[curr]);
		
		cout << ans.size() << "\n";
		for(auto e : ans) cout << e << " ";
		cout << "\n";
		
	} else cout << "IMPOSSIBLE\n";

	return 0;
}
