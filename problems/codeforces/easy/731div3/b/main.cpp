#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

bool test_case(){
	string s;
	cin >> s;
	int n = s.length();
	
	int l = -1, r = -1;
	for(int i = 0; i < n; i++){
		if(s[i] == 'a') { l=r=i; break;}
	}
	
	if(l == -1) return false;
	
	l--;r++;
	for(int i = 1;i < n; i++){
		char c = 'a'+i;
		if(l >= 0 && s[l] == c) l--;
		else if(r>= 0 && s[r] == c) r++;
		else return false;
	}
	
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 0;
	cin >> t;
	
	while(t--){
		cout << (test_case() ? "YES\n" : "NO\n");
	}
	
	return 0;
}
