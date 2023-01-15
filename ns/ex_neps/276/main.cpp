#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<char> venc[5];
	for(char i = 'A'; i <= 'P'; i++) venc[0].pb(i);
	
	for(int fase = 1; fase <= 4; fase++){
		for(int i =0 ; i < (int)venc[fase-1].size(); i+=2){
			int e1 = venc[fase-1][i];
			int e2 = venc[fase-1][i+1];
			
			int g1, g2; cin >> g1 >> g2;
			
			if(g1>g2)venc[fase].pb(e1);
			else venc[fase].pb(e2);
		}
	}

	cout << venc[4][0] << "\n";

	return 0;
}
