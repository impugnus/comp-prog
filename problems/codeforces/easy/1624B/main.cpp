#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void test_case(){
	int a,b,c; cin >> a >> b >> c;
	int nb = b*2;
	
	bool ok = false;
	
	if(nb == a+c) ok=true;
	else if((a+c)%nb == 0) ok=true;
	else if((a+c) > nb) ok=false;
	else if((nb-c)%a==0) ok=true;
	else if((nb-a)%c == 0) ok=true;
	
	cout << (ok ? "YES\n" : "NO\n");
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 0; cin >> t;
	while(t--) test_case();

	return 0;
}
