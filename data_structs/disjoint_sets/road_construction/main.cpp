#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

int N, M, a, b, _rank[MAXN], par[MAXN], mx, nc;

int find(int x){
	if(par[x]==x) return x;
	return par[x]=find(par[x]);
}

void merge(int x, int y){
	x = find(x);
	y = find(y);
	
	
	if(x==y) return;
	else if(_rank[x]>_rank[y]){
		par[y]=x;
		_rank[x]+=_rank[y];
		mx=max(mx, _rank[x]);
	} else {
		par[x]=y;
		_rank[y]+=_rank[x];
		mx=max(mx, _rank[y]);
	}
	
	nc--;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	nc=N;
	for(int i = 1; i <= N; i++) par[i]=i, _rank[i]=1;
	
	for(int i = 0; i < M; i++){
		cin >> a >> b;
		merge(a,b);
		
		cout << nc << " " << mx << "\n";
	}

	return 0;
}
