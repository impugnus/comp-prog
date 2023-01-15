#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;
	
	if(n%3==0){
		cout << "1 1 " << n-2 << "\n";
	} else {
		cout << "1 2 " << n-3 << "\n";
	}

	return 0;
}
