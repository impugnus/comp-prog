#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

void test_case(){
	int n; string s;
	cin >> n >> s;
	int odd = 0;
	for(char c : s) if((c-'0')&1)odd++;
	
	if(odd<=1){
		cout << "-1\n";
		return;
	}
	
	int cnt = 0;
	for(char c : s){
		if((c-'0')&1) { cout << c; cnt++; }
		if(cnt==2) break;
	}
	
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
