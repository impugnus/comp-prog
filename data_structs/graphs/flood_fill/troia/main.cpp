#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

#define MAXN 50050

int n,m;
int comp[MAXN];
vector<int> l[MAXN];

void dfs(int x){
	for(int i = 0; i < (int)l[x].size(); i++){
		int v = l[x][i];
		
		if(comp[v]==-1){
			comp[v]=comp[x];
			
			dfs(v);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for(int i = 1; i <= n; i++) comp[i]=-1;
	
	for(int i = 1; i <= m; i++){
		int x,y; cin >> x >> y;
		
		l[x].push_back(y);
		l[y].push_back(x);
	}
	
	int nc = 0;
	for(int i = 1; i <= n; i++){
		if(comp[i]==-1){
			nc++;
			comp[i]=nc;
			
			dfs(i);
		}
	}
	
	cout << nc << "\n";


	return 0;
}
