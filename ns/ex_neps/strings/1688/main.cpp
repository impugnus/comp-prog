#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s, e; cin >> s >> e;
	s[0]=s[0]-48;
	e[0]=e[0]-48;

	
	bool ans = false;
	
	if((e[0]-'0' == s[0]-'0'+2 || e[0]-'0' == s[0]-'0'-2) && (e[1]-'0'==s[1]-'0'+1 || e[1]-'0'==s[1]-'0'-1)) ans = true;
	else if ((e[0]-'0' == s[0]-'0'+1 || e[0]-'0'==s[0]-'0'-1) && (e[1]-'0'==s[1]-'0'+2 || e[1]-'0'==s[1]-'0'-2)) ans=true;
	
	// (e[0]-'0' == s[0]-'0'+2 || e[0]-'0' == s[0]-'0'-2) && (e[1]-'0'==s[1]-'0'+1 || e[1]-'0'==s[1]-'0'-1)
	// (e[0]-'0' == s[0]-'0'+1 || e[0]-'0'==s[0]-'0'-1) && (e[1]-'0'==s[1]-'0'+2 || e[1]-'0'==s[1]-'0'-2) 
	
	cout << (ans ? "VALIDO\n" : "INVALIDO\n");
	
	return 0;
}
