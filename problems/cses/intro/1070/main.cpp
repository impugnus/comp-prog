#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	if(n==1 || n>3){
		for(int i = 2; i <= n; i+=2) cout << i << " ";
		for(int i = 1; i <= n; i+=2) cout << i << " ";
	} else cout << "NO SOLUTION\n";

	return 0;
}
