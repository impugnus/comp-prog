#include <bits/stdc++.h>

#define pb push_back

#define MAXN 1005

using namespace std;

vector<string> t(MAXN);
bool visited[MAXN][MAXN];

int N;


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> N;
	for(int i = 0; i < N; i++) cin >> t[i];
	
	char res='S';
	bool done = false;
	
	for(int i = 0; i < N && !done; i++){
		int p = 0;
		for(int j = 0; j < N && !done; j++){
			if(t[i][j]=='*' && (p==0 || p==2))p++;
			if(t[i][j]=='.' && (p==1)) p++;
			if(p==3){
				res='N';
				done=true;
			}
		}
	}
	
	for(int j = 0; j < N && !done; j++){
		int p = 0;
		for(int i = 0; i < N && !done; i++){
			if(t[i][j]=='*' && (p==0 || p==2)) p++;
			if(t[i][j]=='.' && (p==1)) p++;
			if(p==3){
				res='N';
				done=true;
			}
		}
	}
	
	cout << res << "\n";
	
	return 0;
}
