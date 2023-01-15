#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int N, M, sx, sy;

bool visited[MAXN][MAXN];
int dist[MAXN][MAXN];

int dx[]={-1, 1, 0, 0};
int dy[]={0, 0, -1, 1};

void bfs(int x, int y){
	queue<pair<int, int>> q;
	q.push({x, y});
	visited[x][y]=1;
	dist[x][y]=0;
	
	while(!q.empty()){
		int currX = q.front().first;
		int currY = q.front().second;
		q.pop();
		
		for(int i = 0; i < 4; ++i){
			int newX = currX+dx[i];
			int newY = currY+dy[i];
			
			if(newX>=0 && newX<N && newY>=0 && newY < M && !visited[newX][newY]){
				visited[newX][newY]=1;
				dist[newX][newY]=dist[currX][currY]+1;
				
				q.push({newX, newY});
			}
		}
	}
	
	for(int i = 0; i < N ; ++i){
		for(int j = 0; j < M; ++j){
			cout << dist[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	cin >> sx >> sy;
	
	bfs(sx, sy);

	return 0;
}
