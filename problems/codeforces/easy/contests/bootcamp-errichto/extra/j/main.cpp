#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s; cin >> s;
	int len = (int)s.size();
	int i = 0;
	while(s[i]=='a')i++;
	
	if(i==(int)s.length()) s[i-1]='z';
	else {
		while(i<len && s[i]!='a')(s[i++])--;
	}
	
	cout << s << "\n";

	return 0;
}
