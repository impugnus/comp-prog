#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int idx[10]={0};
	for(int i = 0; i < 8; i++){
		int v; cin >> v;
		idx[v]++;
	}
	
	int s = 0;
	for(int i = 0; i < 10; i++) s+=idx[i];
	
	bool ok = true;
	for(int i = 0; i < 10; i++){
		if(s-idx[i] < idx[i]){
			ok=false;
			break;
		}
	}
	
	cout << (ok ? "S\n" : "N\n");
	
	return 0;
}
