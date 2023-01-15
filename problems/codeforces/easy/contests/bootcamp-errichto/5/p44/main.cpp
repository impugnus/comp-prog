#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0; cin >> n;
	
	int t,p,c;
	t=p=0;
	c=1;
	for(int i = 1; i <= n; i++){
		t=p+c;
		p=c;
		c=t;
	}
	
	cout << t << "\n";

	return 0;
}
