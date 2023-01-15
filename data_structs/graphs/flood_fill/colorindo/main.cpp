#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

#define MAXN 10005

int n,m,d,e,k,c;
int cor[MAXN][MAXN];

int f(int x, int y){
	if(cor[x][y]==-1) return 0;
	if(cor[x][y]==1) return 1;
	
	if((x>=1 && x <=n) && (y>=1 && y<=m)){
		cor[x][y]=1;
		c++;
		f(x-1,y);
		f(x+1,y);
		f(x,y-1);
		f(x,y+1);
		f(x-1,y+1);
		f(x+1,y-1);
		f(x+1,y+1);
		f(x-1,y-1);
	}
	
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> d >> e >> k;
	
	for(int i = 0; i < k; i++){
		int a,b; cin >> a >> b;
		cor[a][b]=-1;
	}
	
	f(d,e);
	cout << c << "\n";

	return 0;
}
