#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s; cin >> s;
	
	bool f = true;
	for(int i = 0; i < (int)s.size()/2; i++){
		if(s[i]!=s[(int)s.size()-i-1]){
			f=false;
			break;
		}
	}
	
	cout << (f ? "eh palindromo\n" : "nao eh palindromo\n");

	return 0;
}
