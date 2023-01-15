#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void test_case(){
	int l;
	string n;
	cin >> l >> n;
	
	bool odd=false,even=false;
	for(int i = 0; i < l; i++){
		if(i%2==0 && (n[i]-'0')%2==1) odd=true;
		if(i%2==1 && (n[i]-'0')%2==0) even=true;
	}
	
	if(l&1) cout << (odd ? "1\n" : "2\n");
	else cout << (even ? "2\n" : "1\n");

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 0; cin >> t;
	while(t--) test_case();

	return 0;
}
