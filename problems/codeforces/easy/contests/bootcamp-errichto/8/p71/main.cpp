#include <bits/stdc++.h>
 
#define debug(x) cout<<(x)<<"\n"
#define ll long long
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string s; cin >> s;
	
	int l = (int)s.size();
	int c =0;
	for(int i = 0; i < l; i++){
		if(s[i]=='a') c++;
	}
 
	int ans = 0;
	if(c > l/2) ans=l;
	else ans=2*c-1;
	
	cout << ans << "\n";
 
	return 0;
}
