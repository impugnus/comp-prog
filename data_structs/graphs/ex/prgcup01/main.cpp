#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 9

using namespace std;

bool visited[MAXN][MAXN];
int dist[MAXN][MAXN];

int sx,sy,ex,ey;
int dx[]={-2, -2, -1, -1, 1, 1, 2, 2};
int dy[]={-1, 1, -2, 2, -2, 2, -1, 1};

void bfs(int x, int y){
	queue<pair<int, int>> q;
	q.push({x, y});
	visited[x][y]=1;
	dist[x][y]=0;
	
	if(x==ex&&y==ey){
		cout << "0\n";
		return;
	}
	
	while(!q.empty()){
		int currX = q.front().first;
		int currY = q.front().second;
		q.pop();
		
		for(int i =0 ; i < 8; ++i){
			int newX = currX+dx[i];
			int newY = currY+dy[i];
			
			if(newX>=0 && newX<8 && newY>=0 && newY<8 && !visited[newX][newY]){
				dist[newX][newY]=dist[currX][currY]+1;
				visited[newX][newY]=1;
				
				if(newX==ex && newY==ey){
					cout << dist[newX][newY] << "\n";
					return;
				}
				
				q.push({newX, newY});
			}
		}
	}
	
}

void test_case(){
	for(int i = 0; i < 8; i++) for(int j = 0; j < 8; j++) visited[i][j]=0;
	char a,b; cin >> a >> b;
	
	sx = a-'a';
	sy = b-'0';

	cin>>a>>b;
	ex=a-'a';
	ey=b-'0';
	
	bfs(sx, sy);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
