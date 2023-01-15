#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,i; cin >> n >> i;
	
	if(n&(1<<i)) cout << "SET\n";
	else cout << "NOT\n";

	return 0;
}
