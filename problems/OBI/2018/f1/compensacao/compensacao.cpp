#include <bits/stdc++.h>

#define pb push_back

#define MAXN 1000005

using namespace std;

int N, M, soma, melhor;
vector<int> con(MAXN);

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	cin >> M >> N;
	for(int i = 0; i < M; i++){
		int x,y,w; cin >> x >> y >> w;
		con[y]+=w;
		con[x]-=w;
		soma+=w;
	}
	
	for(int i =1; i <= N; i++) melhor+=abs(con[i]);
	
	melhor/=2;
	if(melhor==soma){
		cout << "N\n";
	} else {
		cout << "S\n";
		cout << melhor << "\n";
	}

	return 0;
}
