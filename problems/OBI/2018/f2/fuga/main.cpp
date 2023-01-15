#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int N,M,sx,sy,ex,ey,cnt,ans;
int g[15][15];

int dx[]={2, -2, 0, 0};
int dy[]={0, 0, 2, -2};

void dfs(int x, int y){
	g[x][y]=1;
	cnt++;
	
	if(x==ex&&y==ey) ans=max(ans, cnt);
	else{
		for(int i = 0; i < 4; i++){
			int I=0,J=0;
			I=x+dx[i];
			J=y+dy[i];
			if(I>=1 && I<=N && J>=1 && J<=M && g[I][J]==0){
				cnt++;
				dfs(I, J);
				cnt--;
			}
		}
	}
	cnt--;
	g[x][y]=0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M >> sx >> sy >> ex >> ey;
	for(int i = 2; i <= N; i+=2){
		for(int j =2; j<=M; j+=2) g[i][j]=1;
	}
	
	dfs(sx, sy);
	
	cout << ans << "\n";

	return 0;
}
