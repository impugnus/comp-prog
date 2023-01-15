#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	
	vector<int> a(n);
	
	for(int i = 0; i < m; i++){
		int x = 0; cin >> x;
		
		a[x-1]++;
	}
	
	cout << *min_element(a.begin(), a.end()) << "\n";

	return 0;
}
