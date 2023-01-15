#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int cnt = 0, ans = 0;
	
	string s; cin >> s;
	char last = s[0];
	for(int i = 1; i < (int)s.size(); i++){
		if(s[i]==last) cnt++;
		else last=s[i], ans=max(cnt, ans), cnt=0;
	}
	ans=max(cnt, ans);
	cout << ans+1 << "\n";

	return 0;
}
