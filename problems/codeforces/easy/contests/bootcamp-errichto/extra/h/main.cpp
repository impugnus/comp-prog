#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int idx[4]={0};

	string s; cin >> s;
	
	int len = (int)s.size();
	if(len%2!=0){
		cout << "-1\n";
		return 0;
	}
	
	for(int i = 0; i < len; i++){
		if(s[i]=='L')idx[0]++;
		else if(s[i]=='R')idx[1]++;
		else if(s[i]=='U')idx[2]++;
		else idx[3]++;
	}
		
	cout << (abs(idx[0]-idx[1])+abs(idx[2]-idx[3]))/2 << "\n";
	
	return 0;
}
