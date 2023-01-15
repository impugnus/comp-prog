#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, c;
	cin >> n >> x;
	c=0;
	
	for(int i = 1; i <= n; i++){
		if(x%i==0 && x/i <= n) c++;
	}
	
	cout << c << "\n";
	
	return 0;
}
