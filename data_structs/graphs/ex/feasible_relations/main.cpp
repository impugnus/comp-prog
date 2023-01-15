#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 1000005

using namespace std;

int N, Q;
bool visited[MAXN];
vector<int> g[MAXN];

bool verify(int n1, int n2){
	visited[n1]=1;
	
	for(auto e : g[n1]){
		if(!visited[e]){
			if(e==n2) return false;
			else if(!verify(e,n2)) return false;
		}
	}
	
	return true;
}
	
void test_case(){
	cin >> N >> Q;
	for(int i = 0; i <= N; i++) visited[i]=0,g[i].clear();
	
	bool ok = false;
	
	vector<pair<int, int>> tov;
	for(int i = 0; i < Q; i++){
		string c;
		int u,v; cin >> u >> c >> v;
		
		if(c=="="){
			g[u].pb(v);
			g[v].pb(u);
		} else tov.pb(make_pair(u,v));
		
		for(int j = 0; j < (int)tov.size(); j++){
			for(int z = 0; z <= N; z++) visited[z]=0;

			ok=verify(tov[j].first,tov[j].second);
			if(ok==false)break;
		}
	}
	
	cout << (ok? "YES\n" : "NO\n");
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}

/*
1
2 2
1 = 2
1 != 2

1
3 2
1 = 2
2 != 3
*/
