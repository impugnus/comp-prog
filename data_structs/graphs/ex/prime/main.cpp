#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

#define MAXN 200005

int x,y;

vector<int> primes;
vector<int> g[MAXN];
bool visited[MAXN];
int dist[MAXN];

bool is_prime(int n){
	for(int i = 2; i*i<=n; i++){
		if(n%i==0) return false;
	}
	return true;
}

bool verify(int a, int b){
	int cnt = 0;
	while(a>0){
		if(a%10 != b%10) cnt++;
		a/=10,b/=10;
	}
	
	return (cnt==1);
}

void build(){
	for(int i = 1000; i <= 9999; i++){
		if(is_prime(i)) primes.pb(i);
	}
	
	for(int i = 0; i < (int)primes.size(); i++){
		for(int j = i+1; j < (int)primes.size(); j++){
			int n1 = primes[i];
			int n2 = primes[j];
			
			if(verify(n1, n2)) g[n1].pb(n2), g[n2].pb(n1);
		}
	}
}

void bfs(int node){
	queue<int> q;
	q.push(node);
	
	dist[node]=0;
	visited[node]=1;
	
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		
		for(auto e : g[curr]){
			if(!visited[e]){
				visited[e]=1;
				dist[e]=dist[curr]+1;
				q.push(e);
			}
		}
	}
}

void test_case(){
	cin >> x >> y;
	for(int i = 1000; i <= 9999; i++) visited[i]=0, dist[i]=-1;
	bfs(x);
	
	if(dist[y]==-1) cout << "Impossible\n";
	else cout << dist[y] << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	build();

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
