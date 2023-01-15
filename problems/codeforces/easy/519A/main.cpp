#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<string> t;
	for(int i = 0; i < 8; i++){
		string s; cin >> s;
		t.pb(s);
	} 
	
	int c1 = 0, c2 = 0;
	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			if(t[i][j] == 'Q') c1+=9;
			else if(t[i][j]=='R')c1+=5;
			else if(t[i][j]=='B' || t[i][j] == 'N')c1+=3;
			else if(t[i][j]=='P') c1++;
			else if(t[i][j] == 'q') c2+=9;
			else if(t[i][j]=='r')c2+=5;
			else if(t[i][j]=='b' || t[i][j] == 'n')c2+=3;
			else if(t[i][j]=='p') c2++;
		}
	}
	
	if(c1>c2) cout << "White\n";
	else if(c1<c2) cout << "Black\n";
	else cout << "Draw\n";

	return 0;
}
