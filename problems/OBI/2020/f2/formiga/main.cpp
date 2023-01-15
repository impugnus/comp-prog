#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 205

using namespace std;

vector<int> g[MAXN];
int dist[MAXN];

int f(int k){
	if(dist[k]==-1){
		dist[k]=0;
		for(auto q : g[k]){
			dist[k]=max(1+f(q), dist[k]);
		}
	}
	
	return dist[k];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int s,t,p; cin >> s >> t >> p;
	vector<int> h(s);
	for(int i = 0; i < s; i++) cin >> h[i];
	
	for(int i = 0; i < t; i++){
		int a,b; cin >> a >> b; a--, b--;
		
		if(h[a]>h[b]) g[a].pb(b);
		else g[b].pb(a);
	}
	
	memset(dist, -1, sizeof(dist));
	cout << f(p-1) << "\n";

	return 0;
}
