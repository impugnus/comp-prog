#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int l = 0;
	cin >> l;
	
	string s;
	cin >> s;
	
	map<string, int> m;
	
	for(int i = 0; i+1 < l; i++){
		string k;
			
		k+=s[i]; k+=s[i+1];
		m[k]++;
	}
	
	string idx;
	int b = 0;
	for(auto x: m){
		if(x.second > b){
			b=x.second;
			idx=x.first;
		}
	}
	
	debug(idx);

	return 0;
}
