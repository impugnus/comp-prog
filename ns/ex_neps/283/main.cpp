#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;


void solve(){
	int m,n; cin >> m >> n;
	unordered_map<string, string> mp;
	for(int i = 0; i < 2*m; i +=2){
		string s1, s2;
		getline(cin ,s1);
		getline(cin, s2);
		mp[s1]=s2;
	}
	
	string w;
	for(int i =0 ; i < n; i++){
		getline(cin, w);
		for(int j =0 ; j < (int)w.size(); j++){
			string t;
			if(w[j]==' '){
				if(mp.find(t)==mp.end()) cout << t << " ";
				else cout << mp[t] << " ";
				t="";
			} else t+=w[j];
		}
		
	}
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) solve();

	return 0;
}
