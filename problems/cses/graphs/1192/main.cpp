#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

#define MAXN 1005

int N,M;
vector<string> t(MAXN);
bool visited[MAXN][MAXN];

int di[] = {1, -1, 0, 0};
int dj[] = {0, 0, -1, 1};

void dfs(int a, int b){
	visited[a][b]=1;
	int I, J;
	for(int i = 0; i < 4; i++){
		I=a+di[i];
		J=b+dj[i];
		if(I>=0 && I<N && J>=0 && J<M && !visited[I][J]){
			if(t[I][J]=='.'){
				visited[I][J]=1;
				dfs(I, J);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	for(int i = 0; i < N; i++) cin >> t[i];
	
	int c = 0;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(!visited[i][j]){
				visited[i][j]=1;
				if(t[i][j]=='.'){
					c++;
					dfs(i, j);
				}
			}
		}
	}
	
	cout << c << "\n";

	return 0;
}
