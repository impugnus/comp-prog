#include <bits/stdc++.h>
using namespace std;

const int INF = 100005;

const string pos[] = {"00", "25", "50", "75"};

int solve(string&s, string& t){
	int sptr = s.length()-1;
	int ans = 0;
	
	while(sptr >= 0 && s[sptr] != t[1]) sptr--,ans++;
	
	if(sptr<0) return INF;
	sptr--;
	while(sptr>=0 && s[sptr]!=t[0]) sptr--,ans++;
	return sptr<0 ? INF : ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T; cin >> T;
	while(T--){
		string s; cin >> s;
		
		int ans = INF;
		
		for(auto e : pos) ans=min(ans,solve(s,e));
		
		
		cout << ans << "\n";
	}

	return 0;
}
