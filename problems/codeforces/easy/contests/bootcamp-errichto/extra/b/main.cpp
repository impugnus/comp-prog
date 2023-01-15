#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m; cin >> n >> m;
	
	int t = 0;
	for(int i = 0; i < n; i++){
		int x = 0; cin >> x;
		t+=x;
		
		cout << t/m << " ";
		t=t%m;
	}
	cout << "\n";

	return 0;
}
