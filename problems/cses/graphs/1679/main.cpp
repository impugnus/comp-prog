#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

int n,m,a,b;
vector<int> g[MAXN], res;
int in[MAXN];

void kahn(){
	queue<int> q;
	for(int i = 1; i <= n; i++) if(in[i]==0)q.push(i);
	
	while(!q.empty()){
		int curr = q.front();
		res.pb(curr);
		q.pop();
		
		for(auto e : g[curr]){
			in[e]--;
			if(in[e]==0) q.push(e);
		}
	}
	
	if((int)res.size()==n){
		for(auto e : res) cout << e << " ";
		cout << "\n";
	} else cout << "IMPOSSIBLE\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		g[a].pb(b);
		in[b]++;
	}
	
	kahn();

	return 0;
}
