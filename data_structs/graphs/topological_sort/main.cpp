#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

vector<int> g[MAXN];
vector<int> res;
int in[MAXN];

void kahn(int n){
	queue<int> q;
	for(int i = 1; i <= n; i++) if(in[i]==0) q.push(i);
		
	while(!q.empty()){
		int curr = q.front();
		res.pb(curr);
		q.pop();
		
		for(auto e : g[curr]){
			in[e]--;
			if(in[e] == 0) q.push(e);
		}
	}
	
	for(auto e : res) cout << e << " ";
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m,x,y;
	cin >> n >> m;
	for(int i = 0; i < m; ++i){
		cin >> x >> y;
		g[x].pb(y);
		in[y]++;
	}
	
	kahn(n);

	return 0;
}

/*
9 10
1 2
3 4
1 8
2 9
2 5
4 5
4 8
5 9
5 7
6 7
*/
