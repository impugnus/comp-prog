#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 2001

using namespace std;

int n,q,a,b;
int col[MAXN];
vector<int> g[MAXN];

bool verify(int v, int c){
	col[v]=c;
	
	for(auto e : g[v]){
		if(col[e]==-1){
			if(verify(e, c^1)==false) return false;
		} else if(col[v]==col[e]) return false;
	}
	return true;
}

void test_case(){
	cin >> n >> q;
	for(int i =1; i <= n;i++) g[i].clear(), col[i]=-1;
	
	while(q--){
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}
	
	bool ok = true;
	for(int i = 1; i <= n; i++){
		if(col[i]==-1){
			ok=verify(i,0);
			if(!ok) break;
		}
	}
	
	cout << (ok ? "No suspicious bugs found!\n" : "Suspicious bugs found!\n");
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for(int i =1; i<= T; i++){
		cout << "Scenario #" << i << ":\n";
		test_case();
	}

	return 0;
}
