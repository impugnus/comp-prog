#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a1,d1,a2,d2; cin >> a1 >> d1 >> a2 >> d2;
	
	bool p1 = 0, p2 = 0;
	if(a1!=d2) p1=1;
	if(a2!=d1) p2=1;
	
	if((p1==0 && p2 == 0) || (p1 && p2)) cout << "-1\n";
	else if(p1) cout << "1\n";
	else cout << "2\n";

	return 0;
}
