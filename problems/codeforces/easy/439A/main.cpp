#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,d; cin >> n >> d;

	for(int i = 0; i < n; i++){
		int x = 0; cin >> x;
		d-=x;
	}
	
	cout << (d<10*--n ? -1 : d/5) << "\n";
	
	return 0;
}
