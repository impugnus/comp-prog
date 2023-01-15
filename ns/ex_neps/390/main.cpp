#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	string t;
	for(int i = 1; i <= n; i++){
		string s; cin >> s;
		if(i%2==0) reverse(s.begin(), s.end());
		t+=s;
	}
		
	int ans = 0, curr = 0;
	for(int i = 0; i < (int)t.size(); i++){
		if(t[i]=='o') curr++;
		else if(t[i]!='.'){
			ans=max(ans,curr);
			curr=0;
		}
	}
	
	ans=max(ans,curr);
	
	cout << ans << "\n";

	return 0;
}
