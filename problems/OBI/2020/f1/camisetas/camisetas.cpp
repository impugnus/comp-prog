#include <bits/stdc++.h>

using namespace std;

int main(void){
	int n, p, m, cp=0, cm=0; cin >> n;
	for(int i = 0; i < n; i++){
		int v; cin >> v;
		if(v==1)cp++;
		else cm++;
	}
	
	cin >> p >> m;
	if(cp==p && cm==m) cout << "S\n";
	else cout << "N\n";
	
	
	return 0;
}
