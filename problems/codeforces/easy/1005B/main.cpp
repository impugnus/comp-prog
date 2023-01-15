#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s, t; cin >> s >> t;
	int w = 0;
	while(1){
		int i = s.length()-w-1;
		int j = t.length()-w-1;
		
		if(i>=0 && j>=0 && s[i]==t[j]) w++;
		else break;
	}
	
	cout << s.length()+t.length() - 2*w << "\n";

	return 0;
}
