#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100005

int N, M, Q,  u, v;
int parent[MAXN];

int find(int x){
	if(parent[x]==x) return x;
	
	return parent[x]=find(parent[x]);
}

void merge(int a, int b){
	if(a>b) parent[find(b)]=find(a);
	else parent[find(a)]=find(b);
}

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	
	for(int i = 1; i <= N; i++)parent[i]=i;
	
	for(int i =0 ; i < M; i++){
		cin >> u >> v;
		merge(u,v);
	}
	
	cin >> Q;
	while(Q--){
		cin >> u>> v;
		int pu = 0, pv=0;
		pu=find(u); pv=find(v);
		
		if(pu==pv) cout << "TIE\n";
		else if(pu>pv) cout << u << "\n";
		else cout << v << "\n";
	}

	return 0;
}
