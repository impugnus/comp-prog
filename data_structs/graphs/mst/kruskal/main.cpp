#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

const int MAXN = 1e6;

struct edge{
	int u, v, w;
	
	bool operator < (edge a) const {
		return (w<a.w);
	}
};

edge ar[MAXN];
int n,m;

int par[MAXN];
int _rank[MAXN];

int find(int x) {
	if(par[x]==x) return x;
	return par[x]=find(par[x]);
}

void merge(int a, int b){
	a = find(a), b = find(b);
	
	if(a==b) return;
	
	if(_rank[a]>=_rank[b]) par[b]=a, _rank[a]+=_rank[b];
	else par[a]=b, _rank[b]+=_rank[a];
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for(int i =1; i <= n; i++) par[i]=i, _rank[i]=1;
	
	for(int i = 0; i < m; i++){
		cin >> ar[i].u >> ar[i].v >> ar[i].w;
	}
	
	sort(ar, ar+m);
	
	int sum = 0;
	for(int i =0 ; i < m; i++){
		int u = ar[i].u;
		int v = ar[i].v;
		int w = ar[i].w;
		
		if(find(u)!=find(v)) sum+=w, merge(u,v);
	}
	
	cout << sum << '\n';

	return 0;
}
