#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int p1,c1,p2,c2; cin >> p1 >>c1 >> p2 >> c2;
	
	if(p1*c1==p2*c2) cout << "0\n";
	else if(p1*c1>p2*c2) cout << "-1\n";
	else cout << "1\n";

	return 0;
}
