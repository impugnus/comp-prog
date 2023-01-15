#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

#define MAXN 55

bool visited[MAXN][MAXN];
vector<pair<char, int>>ans;
vector<string> v;
string s;
int x,y;

int di[]={1,1,1,-1,-1,-1,0,0};
int dj[]={1,0,-1,1,0,-1,1,-1};


void dfs(int a, int b, char c){
	visited[a][b]=1;
	int I, J;
	
	for(int i = 0; i < 8; i++){
		I=a+di[i];
		J=b+dj[i];
		if(I>=0 && I<x && J>=0&&J<y && !visited[I][J]){
			if(v[I][J]==c){ visited[I][J]=1;ans[ans.size()-1].second++; dfs(I, J, c);}
		}
	}
}
	
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int c = 0;
	while(1){
		cin >> x >> y;
		if(x==0) break;
		c++;
		cout << "Problem " << c << "\n";
		
		v.clear(); ans.clear();
		
		for(int i = 0; i < x; i++){
			cin >> s;
			v.push_back(s);
		}
		
		memset(visited, 0, sizeof(visited));
		
		for(int i = 0; i < x; i++){
			for(int j = 0; j < y; j++){
				if(!visited[i][j]){
					visited[i][j]=1;
					if(v[i][j]!='.'){
						pair<char, int> p;
						p.first=v[i][j];
						p.second=1;
						ans.push_back(p);
						
						dfs(i, j, v[i][j]);
					}
				}
			}
		}
		sort(ans.begin(), ans.end(), [](auto &left, auto &right){
			return left.second > right.second;
		});
		for(auto i : ans) cout << i.first << " " << i.second <<  "\n";

	}
	

	return 0;
}
