#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 10005

using namespace std;

int in[MAXN];
vector<int> g[MAXN];
vector<int> res;

bool kahn(int n){
	priority_queue<int, vector<int>, greater<int>> q;
	for(int i = 1; i <= n; i++) if(in[i]==0) q.push(i);
	
	while(!q.empty()){
		int curr = q.top();
		res.pb(curr);
		q.pop();
		
		for(auto e : g[curr]){
			in[e]--;
			if(in[e]==0) q.push(e);
		}
	}
	
	return ((int)res.size() == n);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m,x,y; cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin>>x>>y;
		g[x].pb(y);
		in[y]++;
	}
	

	if(kahn(n)){
		for(auto e : res) cout << e << " ";
		cout << "\n";
	} else cout << "Sandro fails.\n";
	

	return 0;
}
