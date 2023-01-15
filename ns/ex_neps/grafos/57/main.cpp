#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 1005

using namespace std;

int n,m;
int t[MAXN][MAXN], dist[MAXN][MAXN];
bool visited[MAXN][MAXN];

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};

void bfs(int x, int y){
	queue<pair<int, int>> q;
	q.push({x, y});
	visited[x][y]=1;
	dist[x][y]=0;
	
	while(!q.empty()){
		int currX = q.front().first;
		int currY = q.front().second;
		q.pop();
		
		for(int i = 0; i < 4; i++){
			int newX = currX+dx[i];
			int newY = currY+dy[i];
			
			if(newX>=0 && newX<n && newY>=0 && newY<m && !visited[newX][newY]){
				visited[newX][newY]=1;
				if(t[newX][newY]==1){
					dist[newX][newY]=dist[currX][currY]+1;
					q.push({newX, newY});
				} else if(t[newX][newY]==3){
					dist[newX][newY]=dist[currX][currY]+1;
					return;
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	
	int sx=0,sy=0,ex=0,ey=0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> t[i][j];
			if(t[i][j]==2) sx=i,sy=j;
			else if(t[i][j]==3)ex=i,ey=j;
		}
	}
	
	bfs(sx, sy);
	cout << dist[ex][ey]+1 << "\n";

	return 0;
}
