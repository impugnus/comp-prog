#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void test_case(){
	ll x1, x2;
	int p1, p2;
	cin >> x1 >> p1 >> x2>> p2;
	int mn = min(p1, p2);
	p1-=mn;
	p2-=mn;
	if(p1>=7) cout << ">\n";
	else if(p2>=7) cout << "<\n";
	else{
		for(int i = 0; i < p1; i++) x1*=10;
		for(int i = 0; i < p2; i++) x2*=10;
		if(x1<x2) cout << "<\n";
		else if(x1>x2) cout << ">\n";
		else cout << "=\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
