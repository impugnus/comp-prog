#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	int t[n][n];
	
	for(int i =0 ; i < n; i++){
		for(int j = 0; j < n; j++) {
			cin >> t[i][j];
		}
	}
	
	bool ok = true;
	int s1 = 0, s2 = 0;
	for(int i = 0; i < n; i++) s1+=t[i][i], s2+=t[i][n-1-i];
	
	if(s1!=s2) ok = false;
	
	if(ok){
		for(int i = 0; i < n; i++){
			int rs = 0, cs = 0;
			for(int j = 0; j < n; j++)rs+=t[i][j], cs+=t[j][i];
			if(rs!=cs || cs!=s1) {
				ok=false;
				break;
			}
		}
		
	}
	
	cout << (ok ? s1 : -1) << "\n";

	return 0;
}
