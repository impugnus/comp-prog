#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	string s; cin >> s;
	
	int cnt[5]={0};
	
	for(int i = 0; i < l; i++){
		if(s[i]=='A') cnt[0]++;
		else if(s[i]=='B') cnt[1]++;
		else if(s[i]=='C') cnt[2]++;
		else if(s[i]=='D') cnt[3]++;
		else if(s[i]=='E') cnt[4]++;
	}
	
	int ans = 0;
	for(int i =0 ; i < 5; i++){
		if(cnt[i]>0) ans++;
	}
	
	cout << (ans>=3 ? "Yes\n" : "No\n");

	return 0;
}
