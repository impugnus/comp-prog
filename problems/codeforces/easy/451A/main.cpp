#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	if(n>m) n=m;
	
	cout << (n%2==0 ? "Malvika\n" : "Akshat");

	return 0;
}
