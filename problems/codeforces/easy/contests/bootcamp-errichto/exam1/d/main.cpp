#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string g,r,p;
	cin >> g >> r >> p;
	
	int l[27]={0};
	
	for(int i = 0; i < (int)g.size(); i++) l[g[i]-64]++;
	for(int i = 0; i < (int)r.size(); i++) l[r[i]-64]++;
	for(int i = 0; i < (int)p.size(); i++) l[p[i]-64]--;
	
	bool ok =true;
	for(int i = 1; i < 27; i++){
		if(l[i]!=0){
			ok=false;
			break;
		}
	}
	
	cout << (ok ? "YES\n" : "NO\n");


	return 0;
}
