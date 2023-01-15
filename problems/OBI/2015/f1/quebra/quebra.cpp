#include <bits/stdc++.h>

#define MAXN 200005

using namespace std;

char pos[MAXN];
int dps[MAXN];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int l; cin >> l;
	for(int i = 0; i < l; i++){
		int s,e;
		char c; cin >> s >> c >> e;
		
		pos[s]=c;
		dps[s]=e;
	}
	
	int c = 0, idx =0;
	while(c!=l){
		cout << pos[idx];
		idx=dps[idx];
		c++;
	}
	cout << "\n";

	return 0;
}
