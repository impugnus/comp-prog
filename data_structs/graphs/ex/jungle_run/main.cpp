#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 31

using namespace std;

int N, sx, sy, ex, ey;
bool visited[MAXN][MAXN];
int dist[MAXN][MAXN];

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};
char t[MAXN][MAXN];

void bfs(int x, int y){
	queue<pair<int, int>> q;
	q.push({x,y});
	visited[x][y]=1;
	
	while(!q.empty()){
		int currX = q.front().first;
		int currY = q.front().second;
		q.pop();
		
		for(int i = 0; i < 4; ++i){
			int newX = currX+dx[i];
			int newY = currY+dy[i];
			
			if(newX>=0 && newX<N && newY>=0 && newY<N && !visited[newX][newY]){
				visited[newX][newY]=1;
				dist[newX][newY]=dist[currX][currY]+1;
				
				if(t[newX][newY]=='P'){
					q.push({newX, newY});
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N;
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < N; ++j){
			cin >> t[i][j];
			if(t[i][j]=='S') sx=i,sy=j;
			else if(t[i][j]=='E') ex=i,ey=j;
		}
	}
	
	bfs(sx, sy);
	cout << dist[ex][ey] << "\n";
	
	return 0;
}
