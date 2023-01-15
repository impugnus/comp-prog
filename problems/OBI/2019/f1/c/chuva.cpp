#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

#define MAXN 505

string t[MAXN];
int n,m;

void f(int i, int j){
	if(i==n || j == m) return;
	
	if(t[i+1][j]=='#'){
		
		if(t[i][j+1]!='o'){
			t[i][j+1]='o';
			f(i,j+1);		
		}
		
		if(t[i][j-1]!='o'){
			t[i][j-1]='o';
			f(i,j-1);
		}
	} else {
		if(t[i+1][j]!='o'){
			t[i+1][j]='o';
			f(i+1, j);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	string s;
	
	for(int i = 0; i < n; i++) cin >> s, t[i]=s;
	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(t[i][j]=='o'){
				f(i,j);
				break;
			}
		}
	}
	
	
	for(int i = 0; i < n; i++){
		cout << t[i];
		cout << "\n";
	}
	
	return 0;
}
