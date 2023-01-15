#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 1005

using namespace std;

int N, M, sx, sy, ex, ey;
char dir[MAXN][MAXN];
char t[MAXN][MAXN];
bool visited[MAXN][MAXN];

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};

bool bfs(int a, int b){
	queue<pair<int, int>> q;
	q.push({a, b});
	
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		visited[x][y]=1;
		
		for(int i = 0; i < 4; i++){
			int I = x+dx[i];
			int J = y+dy[i];
			
			if(I>=0 && I < N && J>=0 && J < M && !visited[I][J]){
				if(t[I][J]=='.'){
					if(dx[i]==1) dir[I][J]='D';
					else if(dx[i]==-1) dir[I][J]='U';
					else if(dy[i]==1) dir[I][J]='R';
					else dir[I][J]='L';
					visited[I][J]=1;
					
					q.push({I, J});
				} else if(I==ex && J==ey){
					if(dx[i]==1) dir[I][J]='D';
					else if(dx[i]==-1) dir[I][J]='U';
					else if(dy[i]==1) dir[I][J]='R';
					else dir[I][J]='L';
					return true;
				}
			}
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++) dir[i][j]='0';
		}
	
	int found = 0;
	for(int i = 0; i < N;i++){
		for(int j = 0; j < M; j++){
			cin >> t[i][j];
			if(found!=2){
				if(t[i][j]=='A') sx=i,sy=j,found++;
				else if(t[i][j]=='B')ex=i,ey=j,found++;
			}
		}
	}
	
	if(bfs(sx, sy)){
		cout << "YES\n";
		
		int cnt = 0;
		int x=ex,y=ey;
		string ans;
				
		while(x!=sx||y!=sy){
			if(dir[x][y]=='U') ans+='U', x++;
			else if(dir[x][y]=='D') ans+='D', x--;
			else if(dir[x][y]=='L') ans+='L', y++;
			else ans+='R', y--;
			cnt++;
		}
		
		cout << cnt << "\n";
		reverse(ans.begin(), ans.end());
		cout << ans << "\n";
	} else cout << "NO\n";
	

	return 0;
}
