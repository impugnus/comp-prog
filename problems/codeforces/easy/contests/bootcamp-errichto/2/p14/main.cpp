#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string n;
	cin >> n;
	
	int c=0;
	for(int i = 0; i < (int)n.size(); i++){
		if(n[i] == '4' || n[i] == '7') c++;
	}
		
	string f = to_string(c);
	
	bool ans = true;
	for(int i = 0; i < (int)f.size(); i++){
		if(f[i] != '4' && f[i] != '7'){ans=false; break;}
	}
	
	if(ans) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}
