#include <bits/stdc++.h>

#define MAXN 501

using namespace std;

int n,f;
vector<string> t(MAXN);

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};

void func(int x, int y){
	t[x][y]='*';
	int I=0, J=0;
	for(int i = 0; i < 4; i++){
		I=x+dx[i];
		J=y+dy[i];
		
		if(I>=0 && I < n && J >= 0 && J < n && t[I][J]!='*' && (t[I][J]-'0')<=f){
			func(I, J);
		}
	}
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> f;
	for(int i = 0; i < n; i++) cin >> t[i];
	
	if((t[0][0]-'0')<=f) func(0, 0);
	
	for(int i = 0; i < n; i++) cout << t[i] << "\n";
	
	return 0;
}
