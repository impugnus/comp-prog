#include <bits/stdc++.h>

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	vector<int> a(4);
	for(int i =0 ; i < 4; i++) cin >> a[i];
	
	int idx = 0;
	bool found = false;
	for(int i = 0; i < 2; i++){
		if(a[i]==a[i+2]){
			idx=i;
			found=true;
			break;
		}
	}
	
	bool ok = false;
	if(found){
		if(idx==0){
			if(a[1]!=a[3]) ok = true;
		} else if(a[0]!=a[2]) ok = true;
	}
	
	cout << (ok ? "V\n" : "F\n");
	
	return 0;
}	
